
#ifndef  CHROMATIC_DLL_H
#define  CHROMATIC_DLL_H

#include "ChromaticsStruct.h"

//�Զ���ɫ��
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


//ɫ�ݲ�
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI xyToMainWave(float fx,float fy,float &fMainWave,float &Puity);



//ɫ�ݲ�
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetSDCM(int iStdNum,float fx,float fy,float &fSDCM);



extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetColorData(float *pWaveData, float fStarWave, float fEndWave, float Interval, float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);



//===========================================
//��ɢ�㷨 ����ɫ������

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI ZoomCalXY(float fx,float fy,float *fZoomX,float *fZoomY);




//===========================================
//��Ե�ɫ�ƻ�RGB��ɫ���㷨
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI SetLEDType(int iMode);
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRGBWaveband(float *fAD,float fInter,int *iSWave,int *iEWave);

//��ȡRGB������ R(590nm-700nm) G(430nm-590nm) B(380nm-550nm)
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRGBMainWave(float *fLamda,float *fRMainWave,float *fGMainWave, float *fBMainWave);

//���Ĳ��������Ĳ���
//extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetCenterAndCentroid(float *fLamda,float fInterval, float StarWave, float EndWave,float *fCenterWave,float *CentroidWave);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetCenterAndCentroid(float *fLamda,float fInterval,float StarWave, float EndWave, float &fCenterWave,float &CentroidWave);


//��ɫ��
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetfRedRatio(float *fPLamda, float &fRedRatio);
//��ɫ�ȡ���ɫ�ȡ���ɫ��
extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetRGBRatio(float *fPLamda, float &fRedRatio, float &fGreenRatio, float &fBlueRatio);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetRadiaPower(float *pWave, float fStarWave, float fEndWave, float Interval, float &fRadiaPower);
//pWave:��ʵ�������ݣ���GetRealWaveData�ĵ��������fRealWaveData���鴫��ȥ��
//fStarWave:��ʼ��������GetRealWaveData�ĵ�һ�����fStarWave����ȥ��
//fEndWave:������������GetRealWaveData�ĵڶ������fEndWave����ȥ��
//Interval:�����������GetRealWaveData�ĵ��������fInterval����ȥ��
//fRadiaPower:���ع⹦����ֵ

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetMcdPar(float *pWave, float fStarWave, float fEndWave, float Interval, float &fMcd);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetMaxLamda(float *pWave, float fStarWave, float fEndWave, float Interval, float &fMaxWave, float &fHalfwidth);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetALLData1nm(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetALLData01nm(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi,float *fFlux,float *fRiadio);


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetStdIlluminanData(float fInterval,int iStdLightMode, float *fStdData);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetLABofReflect(float *fR,float fInterval,int iStdLightMode, double &dL, double &dA, double &dB);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetDifferenceOfColor(float *fLeftUp, float *fRightUp, float *fLeftDown, float *fRightDown,int iColumnNum,int iRowNum, float *fDX, float *fDY, float *fE);

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI IGetMaxWaveF(float fStartWave,float fEndWave,float fInterval,float *pWave, float *fMaxWave , float *fMaxData,float *fHalf);
																	//��ȡ�������⡢�ɼ�������ȫ�����ڵķ�ֵ����

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
                                                          //�������� ��0.1nm�Ĺ�������ת��1nm ����  
                                                          //*fPLamda    ����������� 0.1nm���  380-780nm  ��4001������
                                                          //*fWave      ����������� 1nm���  380-780nm  ��401������
                                           

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetFluxAndRadiaPower(float *fPLamda,float *fFlux, float *fRadiaPower,float fCCDTimes);
                                                          //�������� ���� flux ��ͨ��  fRadiaPower  �⹦��
                                                          //*fPLamda    ����������� 1nm���  380-780nm  ��401������
                                                          //fCCDTimes   ����ʱ�õĻ���ʱ�� 
                      
                                                         


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI FindFristPeak(float *pWave, float *fPeakWave);
                                                          //���� ���� 1 �ҵ���ֵ  ���� 0 û���ҷ�ֵ
                                                          //*pWave     ����������� 0.1nm���  380-780nm  ��4001������
                                                          //fPeakWave  ��һ����ֵ�Ĳ���




extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetFlux(float *fPLamda,float *fFlux, float fCCDTimes);
                                                                  //fPlamda     ����������� 1nm���  380-780nm  ��401������
                                                                  //fFlux       ��ͨ��ֵ
                                                                  //fCCDTimes   ����ʱ�õĻ���ʱ�� 

                        

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI CalFluxK(float *fPLamda,float *fFlux, float fCCDTimes);
                                                                  //fPlamda     ��׼���µľ��Թ������� 1nm���  380-780nm  ��401������
                                                                  //fFlux       ��׼��ͨ��ֵ
                                                                  //fCCDTimes   ��׼���µĻ���ʱ�� 


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetChromaticsData(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi);
                                                                     //����ɫ�ȸ�����
                                                                     //fPlamda     ����������� 1nm���
                                                                     //fx,fy,fu,fu  �ֱ�ΪɫƷ���� x,y,u,v
                                                                     //fRedRatio      ��ɫ��
                                                                     //fMainLamda    ������
                                                                     //fPurity       ɫ����
                                                                     //fMaxslamda    ��ֵ����
                                                                     //fHaveWidth    ����
                                                                     //fCCT          ���ɫ��
                                                                     //fRa           ƽ����ɫָ��
                                                                     //fRi 1-15      ��ɫָ�� R1-R15


extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI GetChromaticsData01(float *fPLamda,float *fx, float *fy, float *fu, float *fv, float *fRedRatio,float *fMainlamda,float *fPurity,float *fMaxslamda,float *fHaveWidth,float *fCCT, float *fRa, float *fRi);
                                                                     //����ɫ�ȸ�����
                                                                     //fPlamda     ����������� 0.1nm���
                                                                     //fx,fy,fu,fu  �ֱ�ΪɫƷ���� x,y,u,v
                                                                     //fRedRatio      ��ɫ��
                                                                     //fMainLamda    ������
                                                                     //fPurity       ɫ����
                                                                     //fMaxslamda    ��ֵ����
                                                                     //fHaveWidth    ����
                                                                     //fCCT          ���ɫ��
                                                                     //fRa           ƽ����ɫָ��
                                                                     //fRi 1-15      ��ɫָ�� R1-R15

                                                                  

extern "C" __declspec(dllexport)   unsigned int __stdcall WINAPI Planck(float fTc, float *fWaveData,float fStarWave, float fEndWave, float fInterv);//���ʿ˹�ʽ ɫ����������
                                                                     //fTc           ���ɫ��
                                                                     //fWaveData     ��������
                                                                     //fStarWave     ��ʼ����
                                                                     //fEndWave      ��������
                                                                     //fInterv       �������


extern "C" __declspec(dllexport)   unsigned int WINAPI GetXYZ(float *fx,float *fy, float *fz);//��ȡX(),Y(),Z() ��׼����
                                                                     //fx           x() 
                                                                     //fy           y()
                                                                     //fz           z()


extern "C" __declspec(dllexport)   unsigned int WINAPI GetRGB(float fSpect, float *R, float *G, float *B);  //

                                                                       

#endif