#include<stdio.h>
int pattern (int irow,int jcol)
{
	
	int mid = (irow / 2);
	for (int i = 1; i <= irow; i++)
	{
		for (int j = 1; j <= jcol; j++)
		{
			if(i==1||i==6||i==irow||(i<=6&&j==1)||(i>6&&j==irow))
			//if (i == 1 || i == mid || j == 1 || (i <= mid && j == irow))
			//if (i == 1 || j == mid)
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
	int row = 11;
	int column = 11;
	int result = 0;
	result = pattern(row, column);
	return 0;
	 
}