#include "ManusVRPrivatePCH.h"
#include "ManusVR.h"
#include "ManusVRController.h"
#include "ManusLib.h"
#include "ManusVR2.h"
#include "../../../ThirdParty/Manus/include/Manus.h"


typedef int(*int_void)();// ManusInit, ManusExit
typedef int(*int_hand_pdata_uint)(GLOVE_HAND hand, GLOVE_DATA* data, unsigned int timeout);// ManusGetData
typedef int(*int_hand_bool_bool_bool)(GLOVE_HAND hand, bool gyro, bool accel, bool fingers );//ManusCalibrate
typedef int(*int_hand_float)(GLOVE_HAND hand, float power );//setVibration

extern int_void _ManusInit;
extern int_void _ManusExit;
extern int_hand_pdata_uint _ManusGetData;
extern int_hand_bool_bool_bool _ManusCalibrate;
extern int_hand_float _ManusSetVibration;

UManusVR2::UManusVR2(){
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UManusVR2::BeginPlay(){
	Super::BeginPlay();

}

void UManusVR2::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ){
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

}

void UManusVR2::initDLL(){
	FString filePath = FPaths:: ConvertRelativePathToFull(
		FPaths::Combine(*FPaths::GamePluginsDir(), TEXT("ManusVR/ThirdParty/Manus/lib"), TEXT("Win64"), TEXT("Manus.dll")));

	//FString dllPath = "ManusVR/ThirdParty/Manus/lib/Win64/Manus.dll";
	if( FPaths::FileExists( filePath ) ){
		m_handleDLL = FPlatformProcess::GetDllHandle(*filePath);
	}else{
		UE_LOG(LogManusVR, Log, TEXT("Failed to find Manus.dll!"));
	}
}

void UManusVR2::initManus(){
	initDLL();

	if( m_handleDLL != NULL ){
		int_void fInit = NULL;
		FString procName = "ManusInit";
		fInit = (int_void)FPlatformProcess::GetDllExport(m_handleDLL, *procName);
		if (fInit != NULL){
			fInit();
		}
	}
}

void UManusVR2::shutdownManus(){
	if( m_handleDLL != NULL ){
		int_void fExit = NULL;
		FString procName = "ManusExit";
		fExit = (int_void)FPlatformProcess::GetDllExport(m_handleDLL, *procName);
		if (fExit != NULL){
			fExit();
		}
	}
}

void UManusVR2::getFingers( const bool leftHand, float& thumb, float& index, float& middle, float& ring, float& pink, FVector& accel, FVector& orientation ){
	GLOVE_DATA data;

	if (m_handleDLL != NULL){
		int_hand_pdata_uint fManusGetData = NULL;
		FString procName = "ManusGetData";
		fManusGetData = (int_hand_pdata_uint)FPlatformProcess::GetDllExport(m_handleDLL, *procName);
		if (fManusGetData != NULL){
			GLOVE_HAND hand = leftHand ? GLOVE_HAND::GLOVE_LEFT : GLOVE_HAND::GLOVE_RIGHT;
			float result = fManusGetData(hand, &data, 0);
			if( result != MANUS_SUCCESS ){
				thumb =		result;
				index =		0.0f;
				middle =	1.0f;// :o
				ring =		0.0f;
				pink =		0.0f;
				return;
			}
		}else{

		}
	}else{

	}

	thumb =		data.Fingers[0];
	index =		data.Fingers[1];
	middle =	data.Fingers[2];
	ring =		data.Fingers[3];
	pink =		data.Fingers[4];
	accel =		FVector( data.Acceleration.x, data.Acceleration.y, data.Acceleration.z );
	orientation = FVector( data.Euler.x, data.Euler.y, data.Euler.z );
}

void UManusVR2::calibrate( const bool leftHand, bool gyro, bool accel, bool fingers ){
	if( m_handleDLL != NULL ){
		int_hand_bool_bool_bool fManusCalibrate = NULL;
		FString procName = "ManusCalibrate";
		fManusCalibrate = (int_hand_bool_bool_bool)FPlatformProcess::GetDllExport(m_handleDLL, *procName);
		if (fManusCalibrate != NULL){
			GLOVE_HAND hand = leftHand ? GLOVE_HAND::GLOVE_LEFT : GLOVE_HAND::GLOVE_RIGHT;
			fManusCalibrate(hand, gyro, accel, fingers );
		}
	}
}

void UManusVR2::setVibration( const bool leftHand, float power ){
	if( m_handleDLL != NULL ){
		int_hand_float fManusSetVibration = NULL;
		FString procName = "ManusSetVibration";
		fManusSetVibration = (int_hand_float)FPlatformProcess::GetDllExport(m_handleDLL, *procName);
		if (fManusSetVibration != NULL){
			GLOVE_HAND hand = leftHand ? GLOVE_HAND::GLOVE_LEFT : GLOVE_HAND::GLOVE_RIGHT;
			fManusSetVibration( hand, power );
		}
	}
}