#include<stdio.h>
void Pattern(int irow,int icol)
{
	int i=0,j=0,k=1;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
			{
			if((i==1)||(i==3)||(i==irow))
			{
				printf("*\t");
			}
			else
			{
				printf("        ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int ivalue1=0,ivalue2=0;
	printf("Enter number of rows");
	scanf("%d",&ivalue1);
	printf("Enter number of columns");
	scanf("%d",&ivalue2);
	Pattern(ivalue1,ivalue2);
	return 0;
}
