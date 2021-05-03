#ifndef  CHROMATIC_STRUCT_H
#define  CHROMATIC_STRUCT_H



typedef struct
{
	float  fSpectralData[1000];
	float  fStarWave;
	float  fEndWave;
	float  fIntervalWave;

}C_SPECTR_DATA;


typedef struct
{
	C_SPECTR_DATA   fSpectralData;
	float  fx;
	float  fy;
	float  fCCT;
	float  fu;
	float  fv;
}CChromaticsResultSTR;



typedef struct
{
	C_SPECTR_DATA   fSpectralData;
	float  fQa;
	float  fQf;
	float  fQp;
	float  fQg;
	float  fQi[15];
}CCQSSTRUCT;



// =====================================================

typedef struct 
{
	C_SPECTR_DATA   fSpectralData;
	float  fPPF;
	float  fPPFW;
	float  fPPFD;
	float  fUVPPF;
	float  fBluePPF;
	float  fGreenPPF;
	float  fRedPPF;
	float  fNearIRPPF;
	float  fPAR;
	float  fRBRate;

}C_LIGHT_PPF;



typedef struct 
{
	float  fx;    //���� ���Խ���� x
	float  fy;    //���� ���Խ���� y
	float  fCCT;  //���� ���Խ���� CCT ɫ��ֵ
	float  fDUV;  //���ؽ��  DUV

}C_DUV;




#endif