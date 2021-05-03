#ifndef  FLA5000DLL_STRUCT_H
#define  FLA5000DLL_STRUCT_H

//光谱仪信息
typedef struct
{
	int				iOutNum;
	unsigned char	*pOutData;
	int				iInNum;
	unsigned char	*pInData;
	int				iPipeNum;

}COMMAND_PAR;

//光谱仪信息
typedef struct
{
	int                iChannelNum;        //通道号
	unsigned char      Sn[16];        //编号
	unsigned char      Mode[16];      //型号
	float     fWaveRange[2];  //波长范围
	char      DeviceName[64]; //设备号
	int       bConnect;       //连接标记
	int       bOpenEnble;     //打开标记
	int       bCommFlag;      //通讯标记

}SPECTRO_INF;

//光谱定标参数
typedef struct 
{
	float fCalStartWave;
	float fCalEndWave;
	float fCalStdCCT;
	float fCalStdFlux;
	float fCalCCDTime;
	int iCalSampleCount;

}SPECTRO_CALPAR;

typedef struct _THREAD_CONTROL
{
   HANDLE hDevice;

   DWORD Ioctl;
   PVOID InBuffer;
   DWORD InBufferSize;
   PVOID OutBuffer;
   DWORD OutBufferSize;
   DWORD BytesReturned;

   HANDLE completionEvent;
   BOOL  status;
} THREAD_CONTROL, *PTHREAD_CONTROL;

struct  NONLINER_COEFFICIENT
	{
		int  iRangeUp;
		int  iRangeDown;
        float  fa0;
        float  fa1;
        float  fa2;
	};
                                                                   

#endif