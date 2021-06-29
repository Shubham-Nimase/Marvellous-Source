#include<stdio.h>
void Pattern1(int irow,int icol)
{
	int i=0,j=0;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			if((i==1)||(i==irow)||(j==1)||(j==icol)||(i==j))
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
	printf("enter row number");
	scanf("%d",&ivalue1);
	printf("enter column number");
	scanf("%d",&ivalue2);
	Pattern1(ivalue1,ivalue2);
	return 0;
}