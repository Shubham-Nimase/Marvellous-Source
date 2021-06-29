/* Problem Statement : 11.4
Write a program which accept range from user and return Addition of all even number in between that range.
(Range should contains positive numbers only)*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
	int iSum = 0;
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}
	else if ((iStart < 0) || (iEnd < 0))
	{
		printf("Invalid Range\n");

	}

	while (iStart <= iEnd)
	{
		if ((iStart % 2 == 0))
		{
			iSum = (iSum + iStart);
		}

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

	iRet = RangeSumEven(iValue1, iValue2);

	printf("Addition  is: %d", iRet);
	return 0;
}