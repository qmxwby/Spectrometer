#ifndef  FLA5000DLL_STRUCT_H
#define  FLA5000DLL_STRUCT_H

//��������Ϣ
typedef struct
{
	int				iOutNum;
	unsigned char	*pOutData;
	int				iInNum;
	unsigned char	*pInData;
	int				iPipeNum;

}COMMAND_PAR;

//��������Ϣ
typedef struct
{
	int                iChannelNum;        //ͨ����
	unsigned char      Sn[16];        //���
	unsigned char      Mode[16];      //�ͺ�
	float     fWaveRange[2];  //������Χ
	char      DeviceName[64]; //�豸��
	int       bConnect;       //���ӱ��
	int       bOpenEnble;     //�򿪱��
	int       bCommFlag;      //ͨѶ���

}SPECTRO_INF;

//���׶������
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