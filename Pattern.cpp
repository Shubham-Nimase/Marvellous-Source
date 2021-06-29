#include<stdio.h>

int Pattern(int iNo1, int iNo2)

{
	int iRow = 0;
	int iCol = 0;

	for (iRow = 1; iRow <= iNo1; iRow++)
	{
		for (iCol = 1; iCol <= iNo2; iCol++)
		{
			if (iRow > iCol)
			{
				printf("*\t");
			}
			else if (iRow == iCol)
			{
				printf("@\t");
			}
			else
			{

			printf("*\t");
			}
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int value1 = 0;
	int value2 = 0;

	printf("enter the number of rows and columns=");
	scanf_s("%d%d" ,&value1, &value2);

	Pattern(value1, value2);

	return 0;
}