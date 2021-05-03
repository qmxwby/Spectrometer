
#ifndef  CHROMATIC_DLL_H
#define  CHROMATIC_DLL_H

#include "ChromaticsStruct.h"

//自定义色比
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetCustomColorRatio(float *fPLamda, float fCustomStartWave,float fCustomEndWave, float &fColorRatio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI SetXYZDeg(int iDeg);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI VF1Correct(float fVF, float *fCVF);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI VF2Correct(float fVF, float *fCVF);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI VF3Correct(float fVF, float *fCVF);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI VF4Correct(float fVF, float *fCVF);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetCQS(CCQSSTRUCT *pCQSData);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRgRf(float *fRi,float *fRg,float *fRf);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetDuv(C_DUV  *cDuv);



extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetPPF(C_LIGHT_PPF *pLightPPF);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IxyTouv(float fx,float fy,float &u,float &v);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI DoSimilarity(float *fData1, float *fData2, int iNum, float &fSimilarity);


//色容差
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI xyToMainWave(float fx,float fy,float &fMainWave,float &Puity);



//色容差
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetSDCM(int iStdNum,float fx,float fy,float &fSDCM);



extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetColorData(float *pWaveData, float fStarWave, float fEndWave, float Interval, float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);



//===========================================
//打散算法 回算色度坐标

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI ZoomCalXY(float fx,float fy,float *fZoomX,float *fZoomY);




//===========================================
//针对单色灯或RGB的色度算法
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI SetLEDType(int iMode);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRGBWaveband(float *fAD,float fInter,int *iSWave,int *iEWave);

//获取RGB主波长 R(590nm-700nm) G(430nm-590nm) B(380nm-550nm)
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRGBMainWave(float *fLamda,float *fRMainWave,float *fGMainWave, float *fBMainWave);

//质心波长和重心波长
//extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetCenterAndCentroid(float *fLamda,float fInterval, float StarWave, float EndWave,float *fCenterWave,float *CentroidWave);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetCenterAndCentroid(float *fLamda,float fInterval,float StarWave, float EndWave, float &fCenterWave,float &CentroidWave);


//红色比
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetfRedRatio(float *fPLamda, float &fRedRatio);
//红色比、绿色比、蓝色比
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetRGBRatio(float *fPLamda, float &fRedRatio, float &fGreenRatio, float &fBlueRatio);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRadiaPower(float *pWave, float fStarWave, float fEndWave, float Interval, float &fRadiaPower);
//pWave:真实光谱数据（将GetRealWaveData的第五组参数fRealWaveData数组传进去）
//fStarWave:起始波长（将GetRealWaveData的第一组参数fStarWave传进去）
//fEndWave:结束波长（将GetRealWaveData的第二组参数fEndWave传进去）
//Interval:波长间隔（将GetRealWaveData的第三组参数fInterval传进去）
//fRadiaPower:返回光功率数值

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetMcdPar(float *pWave, float fStarWave, float fEndWave, float Interval, float &fMcd);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetMaxLamda(float *pWave, float fStarWave, float fEndWave, float Interval, float &fMaxWave, float &fHalfwidth);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetALLData1nm(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetALLData01nm(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetStdIlluminanData(float fInterval,int iStdLightMode, float *fStdData);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetLABofReflect(float *fR,float fInterval,int iStdLightMode, double &dL, double &dA, double &dB);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetDifferenceOfColor(float *fLeftUp, float *fRightUp, float *fLeftDown, float *fRightDown,int iColumnNum,int iRowNum, float *fDX, float *fDY, float *fE);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetMaxWaveF(float fStartWave,float fEndWave,float fInterval,float *pWave, float *fMaxWave , float *fMaxData,float *fHalf);
																	//获取包括紫外、可见、红外全波段内的峰值波长

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetXYZData(float *fLamda,float fInterval,double &dX, double &dY, double &dZ);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IXYZToRGB(double X, double Y, double Z,double &R, double &G, double &B);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetLAB(float *fLamda,float fInterval,int iStdLightMode, double &dL, double &dA, double &dB);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI ILABToRGB(double L, double a, double b, double &dR, double &dG, double &dB);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IXYZToxyz(float X, float Y, float Z,float &x, float &y, float &z);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI EnalbeCorrect(unsigned int bR);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI OpenCorrectFile(char *pFileName);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI SetCorrectPar();

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI SetZoomPar(float fx,float fy,float fRate);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI EnbleZoomXy(unsigned int iStale);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI ChromaticsOpenStandrenFile(char *pFileDir);






extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetALLData(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IxyToTc(float fx,float fy,float &fTc);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI ITcToxy(float fTc,float &fx,float &fy);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI Wave0_1To1nm(float *fPLamda,float *fWave);
                                                          //函数功能 把0.1nm的光谱数据转成1nm 数据  
                                                          //*fPLamda    输入光谱数据 0.1nm间隔  380-780nm  总4001个数据
                                                          //*fWave      输入光谱数据 1nm间隔  380-780nm  总401个数据
                                           

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetFluxAndRadiaPower(float *fPLamda,float *fFlux, float *fRadiaPower,float fCCDTimes);
                                                          //函数功能 返回 flux 光通量  fRadiaPower  光功率
                                                          //*fPLamda    输入光谱数据 1nm间隔  380-780nm  总401个数据
                                                          //fCCDTimes   测试时用的积分时间 
                      
                                                         


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI FindFristPeak(float *pWave, float *fPeakWave);
                                                          //函数 返回 1 找到峰值  返回 0 没有找峰值
                                                          //*pWave     输入光谱数据 0.1nm间隔  380-780nm  总4001个数据
                                                          //fPeakWave  第一个峰值的波长




extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetFlux(float *fPLamda,float *fFlux, float fCCDTimes);
                                                                  //fPlamda     输入光谱数据 1nm间隔  380-780nm  总401个数据
                                                                  //fFlux       光通量值
                                                                  //fCCDTimes   测试时用的积分时间 

                        

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI CalFluxK(float *fPLamda,float *fFlux, float fCCDTimes);
                                                                  //fPlamda     标准灯下的绝对光谱数据 1nm间隔  380-780nm  总401个数据
                                                                  //fFlux       标准光通量值
                                                                  //fCCDTimes   标准灯下的积分时间 


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetChromaticsData(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi);
                                                                     //计算色度各参数
                                                                     //fPlamda     输入光谱数据 1nm间隔
                                                                     //fx,fy,fu,fu  分别为色品坐标 x,y,u,v
                                                                     //fRedRatio      红色比
                                                                     //fMainLamda    主波长
                                                                     //fPurity       色纯度
                                                                     //fMaxslamda    峰值波长
                                                                     //fHaveWidth    半宽度
                                                                     //fCCT          相关色温
                                                                     //fRa           平均显色指数
                                                                     //fRi 1-15      显色指数 R1-R15


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetChromaticsData01(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi);
                                                                     //计算色度各参数
                                                                     //fPlamda     输入光谱数据 0.1nm间隔
                                                                     //fx,fy,fu,fu  分别为色品坐标 x,y,u,v
                                                                     //fRedRatio      红色比
                                                                     //fMainLamda    主波长
                                                                     //fPurity       色纯度
                                                                     //fMaxslamda    峰值波长
                                                                     //fHaveWidth    半宽度
                                                                     //fCCT          相关色温
                                                                     //fRa           平均显色指数
                                                                     //fRi 1-15      显色指数 R1-R15

                                                                  

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI Planck(float fTc, float *fWaveData,float fStarWave, float fEndWave, float fInterv);//谱朗克公式 色温生成谱线
                                                                     //fTc           相关色温
                                                                     //fWaveData     光谱数据
                                                                     //fStarWave     起始波长
                                                                     //fEndWave      结束波长
                                                                     //fInterv       间隔波长


extern "C" __declspec(dllexport)   unsigned int WINAPI GetXYZ(float *fx,float *fy, float *fz);//读取X(),Y(),Z() 标准数据
                                                                     //fx           x() 
                                                                     //fy           y()
                                                                     //fz           z()


extern "C" __declspec(dllexport)   unsigned int WINAPI GetRGB(float fSpect, float *R, float *G, float *B);  //

                                                                       

#endif