/* Problem Statement : 11.3
Write a program which accept range from user and return Addition of all number in between that range.
(Range should contains positive numbers only)*/

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
	int iSum = 0;
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}
	else if ((iStart < 0)||(iEnd<0))
	{
		printf("Invalid Range\n");
		
	}

	while (iStart <= iEnd)
	{
		iSum = (iSum + iStart);

		iStart++;

	}

	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter Starting Point:\n");
	scanf_s("%d", &iValue1);

	printf("Enter Ending Point:\n");
	scanf_s("%d", &iValue2);

	iRet=RangeSum(iValue1, iValue2);

	printf("Addition is: %d", iRet);
	return 0;
}