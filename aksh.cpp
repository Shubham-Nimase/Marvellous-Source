#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("	"); 
			}
		}
		printf("\n");
	printf("\n");
		printf("\n");
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;
	printf("enter row number=");
	scanf("%d",&ivalue1);
	printf("enter column number=");
	scanf("%d",&ivalue2);
	Pattern(ivalue1,ivalue2);
	return 0;
}