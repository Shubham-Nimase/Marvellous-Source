#include<stdio.h>
void Pattern(int irow,int icol)
{
	int i=0,j=0;
	char ch='\0';
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
		if((i%2)==0)
       {
		 for(j=1;j<=icol;j++)
		   {
			printf("%d\t",j);
		  }
		}
		 else
	    {
		for(j=1;j<=icol;j++)
		{
			printf("%c\t",'a'+i-1);
		
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