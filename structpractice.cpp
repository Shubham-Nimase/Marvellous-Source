
#include<stdio.h>

void pattern(int irow, int icol)
{
	int no = 1;
	for (int i = 1; i <= irow; i++)
	{
		for (int j = 1; j <= icol; j++)
		{
			if (no > 9)
			{ 
				no = 1;
				printf("%d", no);
				no++;
			}
			else {
			
				printf("%d", no);
				no++;
			     }

		}
		printf("\n");
	};

}

int main()
{
	int ivalue1 = 0, ivalue2 = 0;

	printf("Enter number of rows and columns=");
	scanf_s("%d%d", &ivalue1, &ivalue2);

	pattern(ivalue1, ivalue2);
	return 0;
}