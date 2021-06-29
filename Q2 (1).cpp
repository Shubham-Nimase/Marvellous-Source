#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0;
	UINT iResult=0;

	iMask=0x08104040;
	iResult=iNo|iMask;

	if(iResult==iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
int main()
{
	UINT iValue=0;
	BOOL bRet=FALSE;

	printf("Enter any No.=");
	scanf("%d",&iValue);

	bRet=ChkBit(iValue);
	
	if(bRet==TRUE)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;
}