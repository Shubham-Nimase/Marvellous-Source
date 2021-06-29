#include<stdio.h>
void Pattern(int irow,int icol)
{
	int i=0,j=0,k=1;
	if(irow<0)
	{
		irow=-irow;
	}
	if(icol<0)
	{
		icol=-icol;
	}
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		
		{
			if((k<100))
			{
			
            printf("%d\t",k);
			//if(k<100)
			k++;
		}
		
		}
		
	 printf("\n");
	}

}


int main()
{
	int ivalue1=0,ivalue2=0;
	printf("enter Row");
	scanf("%d",&ivalue1);
	printf("enter Column");
	scanf("%d",&ivalue2);
	Pattern(ivalue1,ivalue2);
	return 0;
}