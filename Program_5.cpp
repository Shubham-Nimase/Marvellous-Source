/*
problem statement10.5
Write a program which accept area in square feet and convert it into square
meter.
(1 Square feet =0.0929 Square meter)
*/

#include<stdio.h>

double SquareMeter(int iSqFeet)
{
	return ((double)iSqFeet * 0.0929);
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;

	printf("Enter Area in Square Feet:\n");
	scanf_s("%d", &iValue);

	dRet = SquareMeter(iValue);

	printf("Area in Square Meter is: %lf", &dRet);

	return 0;


}