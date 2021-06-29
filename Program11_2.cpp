/* Problem Statement : 11.2
Write a program which accept range from user and display all even numbers in between that range */

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
	if (iStart > iEnd)
	{
		printf("Invalid Range");
	}
	while (iStart <= iEnd)
	{
		if (iStart % 2 == 0)
		{
			printf("%d\t", iStart);
		}
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

	RangeDisplayEven(iValue1, iValue2);

	return 0;
}