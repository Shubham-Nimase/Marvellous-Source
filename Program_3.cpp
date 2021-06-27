/*
Write a program which accept distance in kilometer and convert it into meter.(1kilometer=1000 mater)
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
	int iAns = 0;
	iAns=(iNo * 1000);

	return iAns;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf_s("Enter Distance\n");
	scanf_s("%d", &iValue);

	iRet = KMtoMeter(iValue);

	printf_s("Distance in Meter is :%d m.", iRet);

	return 0;


}