/*Problem Statement:11.1
Write a program which accept range from user and display all number in between that range*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
	if (iStart > iEnd)
	{
		printf("Invalid Range");
	}
	while (iStart <= iEnd)
	{
		printf("%d\t", iStart);

		iStart++;

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

	RangeDisplay(iValue1, iValue2);

	return 0;
}