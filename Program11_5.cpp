/* Problem Statement : 11.3
Write a program which accept range from user and return Addition of all number in between that range.
(Range should contains positive numbers only)*/

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
	
	if (iStart > iEnd)
	{
		printf("Invalid Range\n");
	}

	while (iEnd>=iStart)
	{
		printf("%d\t", iEnd);

		iEnd--;
	}

	
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	

	printf("Enter Starting Point:\n");
	scanf_s("%d", &iValue1);

	printf("Enter Ending Point:\n");
	scanf_s("%d", &iValue2);

	RangeDisplayRev(iValue1, iValue2);

	
	return 0;
}