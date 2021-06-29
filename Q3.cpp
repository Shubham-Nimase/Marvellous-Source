#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
	int irow=0;
	int icol=0;
	for(irow=iNo1;irow>0;irow--)
	{
		for(icol=iNo2;icol>0;icol--)
		{
			printf("%d\t",icol);
		}
		printf("\n");
	}
}
int main()
{
	int ivalue1=0,ivalue2=0;
	printf("Enter no. of row & Columns=");
	scanf("%d%d",&ivalue1,&ivalue2);
	Pattern(ivalue1,ivalue2);
	return 0;
}
