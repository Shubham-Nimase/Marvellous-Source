/*
Problem Statement: 12.1
Write a program which accept number from user and display below pattern.*/
/*
Input:5
Output:* * * * * # # # # #   */

#include<stdio.h>

void DisplayPattern(int iNo)
{
	int i = 0;
	

	for (i = 0; i <iNo; i++)
	{
		printf("*\t");
	}
	//printf("\n");
	for (i = 0; i < iNo; i++)
	{
			printf("#\t");
		}

	


}

int main()
{
	int iValue = 0;

	printf("Enter Number");
	scanf_s("%d", &iValue);

	DisplayPattern(iValue);

	return 0;
}