/*
problem statement: display 1 * 2 * 3 * 4 * 
*/
#include<stdio.h>
void Pattern(int iNo)
{
	for (int iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t*\t", iCnt);

	}
}

int main()
{
	int iValue = 0;

	printf("Enter Number:\n");
	scanf_s("%d", &iValue);

	Pattern(iValue);

	return 0;


}