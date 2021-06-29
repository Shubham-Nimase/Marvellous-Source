#include<stdio.h>
void Pattern(int iNo1,int iNo2)
{
	int irow=0;
	int icol=0;
	char ch='\A';
	for(irow=1;irow<=iNo1;irow++)
	{
		for(icol=1;icol<=iNo2;icol++)
		{
		printf("%c\t",'A'+irow-1);
		
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
