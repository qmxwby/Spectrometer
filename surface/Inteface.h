#ifndef INTEFACE_H
#define INTEFACE_H

#include "FLA5000DLLStruct.h"


extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetChannelNum(char *SN,int iChannelNum);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetSpectorMeterList(int &iSpectroCount, SPECTRO_INF *sSpectroInf);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_StartTimeOutWatchMux(int iSpectroNum,int iTimeOut);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetTimeOutFlagMux(int iSpectroNum,int &iFlag,int &iPipeNum);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_AortPipeMux(int iSpectroNum,int iPipeNum);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_CheckUSBConnectMux(int iSpectroNum);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetSmoothNumMux(int iSpectroNum,unsigned int iSmoothNum);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetSampleAveMux(int iSpectroNum,unsigned int iSampleCounts);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetIntegrationTimeFMux(int iSpectroNum,float fTime);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetZeroMux(int iSpectroNum,float *fZero);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_CalUVMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,char *sStandUVFile, float *fMaxAD);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_CalTcAndFluxMux(int iSpectroNum,float fStartWave,float fEndWave, float fTc,float fFlux,float *fWaveADData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetRealWaveDataMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fADWaveData, float *fRealWaveData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_FastCalTcMux(int iSpectroNum,float fTc);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetWaveDataMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fWaveData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetOriginalDataMux(int iSpectroNum,float *fData);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_OpenCalSpecForm();
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SetParToCalSpecForm(int iSpectroNum,SPECTRO_CALPAR sSpectroCalPar);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetParFromCalSpecForm(int iSpectroNum,SPECTRO_CALPAR *sSpectroCalPar);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_OpenCfgSpectrometerParForm();

extern "C" __declspec(dllexport)	    unsigned int __stdcall  WINAPI  JF_USB_GetZerolineMux(int iSpectroNum,float *fZeroline);
extern "C" __declspec(dllexport)	    unsigned int __stdcall  WINAPI  JF_USB_GetBaselineMux(int iSpectroNum,float *fBaseline);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_GetAbsorbanceMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fAData);
extern "C" __declspec(dllexport)	    unsigned int __stdcall  WINAPI  JF_USB_GetReflectivityMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fRData);
extern "C" __declspec(dllexport)	    unsigned int __stdcall  WINAPI  JF_USB_GetTransmittanceMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fTData);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SoftTriggerStartSampleMux(int iSpectroNum);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SoftTriggerGetOriginalDataMux(int iSpectroNum,float *fOriginalData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SoftTriggerGetDataMux(int iSpectroNum,float *fOriginalData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SoftTriggerGetWaveDataMux(int iSpectroNum,float fStartWave, float fEndWave, float fInterval, float *fWaveData);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_SoftTriggerGetRealWaveDataMux(int iSpectroNum,float fStartWave,float fEndWave,float fInterval,float *fADWaveData, float *fRealWaveData);

extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_ExternalTriggerSetModeMux(int iSpectroNum,int iEnable);
extern "C" __declspec(dllexport)    unsigned int __stdcall  WINAPI  JF_USB_ExternalTriggerGetDataReadyStateMux(int iSpectroNum,int *iStatle);

extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_GetEnargyOverADMux(int iSpectroNum,float *fEnargyOverAD);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_SetEnargyOverADMux(int iSpectroNum,float fEnargyOverAD);

extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_GetWaveListMux(int iSpectroNum,float *fWaveList);

extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetAutoDarkParMux(int iSpectroNum,int &iEnble, int &iMode, int &iStarMen, int  &iEndMen);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetAutoDarkParMux(int iSpectroNum,int iEnble, int iMode, int iStarMen, int  iEndMen);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetNonLinerParMux(int iSpectroNum,int &iEnble, int &iMode, int &iNum);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetNonLinerParMux(int iSpectroNum,int iEnble, int iMode, int iNum);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetStabilityParMux(int iSpectroNum,int &iEnble, float &fResetTime, int &iResetSampNum, int &iMoveNum, float &fRate);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetStabilityParMux(int iSpectroNum,int iEnble, float fResetTime, int iResetSampNum, int iMoveNum, float fRate);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetSmoothParMux(int iSpectroNum,int &iPixelsEnble, int &iPixelsNum, int &iReultEnble, int &iReultNum);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetSmoothParMux(int iSpectroNum,int iPixelsEnble, int iPixelsNum, int iReultEnble, int iReultNum);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetCalibrationParMux(int iSpectroNum,int &iMode, float &fUVVisfWave);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetCalibrationParMux(int iSpectroNum,int iMode, float fUVVisfWave);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetPixelRangeParMux(int iSpectroNum, int *iStartPoint,  int *iEndPoint);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetPixelRangeParMux(int iSpectroNum, int iStartPoint,  int iEndPoint);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACGetErrorPixParMux(int iSpectroNum, int *iEnble, int *iMode, int *iCount, int  *iDataA, int  *iDataB, int  *iDataC);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_ACSetErrorPixParMux(int iSpectroNum, int iEnble, int iMode, int iCount, int  iDataA, int iDataB, int  iDataC);

extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_GetNonLinerCoefficientMux(int iSpectroNum,int iNumber, int &iRangeDown, int &iRangeUp, float &fA0, float &fA1, float &fA2);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_SetNonLinerCoefficientMux(int iSpectroNum,int iNumber, int iRangeDown, int iRangeUp, float fA0, float fA1, float fA2);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_LoadWaveDataFormHardwareMux(int iSpectroNum);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_WriteWaveDataToHardwareMux(int iSpectroNum);

extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_SetGPIOMux(int iSpectroNum,int iGpioNum,int iState);
extern "C" __declspec(dllexport)   unsigned int __stdcall  WINAPI  JF_USB_GetGPIOMux(int iSpectroNum,int *iState);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetColorData(float *pWaveData, float fStarWave, float fEndWave, float Interval, float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


#endif