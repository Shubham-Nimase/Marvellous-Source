#include<stdio.h>

int StrDigitCnt(char Src[])
{

	int i = 0;
	int iDigit = 0;

	if (Src == NULL)
	{
		return -1;
	}

	while (Src[i] != '\0')
	{
		if ((Src[i] >= '0') && (Src[i] <= '9'))
		{
			iDigit++;
		}
		Src++;
	}
	return iDigit;
}


/*

//By using Pointer
void StrDigitCnt(char *Src, char *Dest)
{
	int iDigit = 0;
	if ((Src == NULL) || (Dest == NULL))
	{
		return;
	}

	while (*Src!= '\0')
	{
		if ((*Src>= '0') && (*Src <= '9'))
		{
			iDigit++;
		}
		Src++;
	}
	*Dest= '\0';

}
*/
int main()
{
	char Arr[30];
	int iRet = 0;

	printf("Enter your String:\n");
	scanf_s("%s", Arr,sizeof(Arr));

	iRet = StrDigitCnt(Arr);

	printf_s("String have %d Digits\n", iRet);

	return 0;
}