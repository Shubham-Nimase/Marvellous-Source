#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	char ch = '\A';

		for(i = 1; i <= iRow; i++)
		{
			for (j = 1; j <= iCol; j++)
			{
				printf("%c\t", 'A' +j - 1);
			}
			printf("\n");
		}
}

int main()
{
	int value1 = 0, value2 = 0;

	printf("Enter no. of Rows=");
	scanf("%d", &value1);

	printf("Enter no. of Columns=");
	scanf("%d", &value2);

	Pattern(value1, value2);

	return 0;
}