#include<stdio.h>

void Swastik(int irow, int icol)
{
		int i, j = 0;

	for (i = 1; i <= irow; i++)
	{
		for (j = 1; j <= icol; j++)
		{
			if ((i == 1) && (j > icol / 2)|| (j == 1) && (i <= irow / 2)|| (j == ((icol / 2)+1))|| (j == icol) && (i > irow / 2)|| (i == irow) && (j <= icol / 2)||(i==((irow/2)+1)))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
			printf("\n");
	}
}

int main()
{
	int ivalue1, ivalue2 = 0;

	printf("Enter number of rows: ");
	scanf_s("%d", &ivalue1);

	printf("Enter number of columns: ");
	scanf_s("%d", &ivalue2);

	Swastik(ivalue1, ivalue2);

	return 0;
}