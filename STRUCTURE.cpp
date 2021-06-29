#include<stdio.h>
int pattern (int irow,int jcol)
{
	
	int mid = (irow / 2);
	for (int i = 1; i <= irow; i++)
	{
		for (int j = 1; j <= jcol; j++)
		{
			//if(i==1||i==mid||i==irow||(i<=mid&&j==1)||(i>mid&&j==jcol))
			//if (i == 1 || i == mid || j == 1 || (i <= mid && j == jcol))
			if (i == 1 || j == jcol/2)
			{
			  printf("*");
			}
			else
			
				printf(" ");

		}
		printf("\n");
	};
	return 0;
}

int main()
{
	printf("pattern printing \n");
	int row =0;
	int column =0;
	printf("Enter the number of row and column\n");
	scanf_s("%d%d", &row, &column);
	int result = 0;
	result = pattern(row, column);
	return 0;
	 
}