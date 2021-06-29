#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("%d\t",j);
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
	printf("Enter row number");
	scanf("%d",&ivalue1);
	printf("Enter column number");
	scanf("%d",&ivalue2);
	Pattern(ivalue1,ivalue2);
	return 0;
}
