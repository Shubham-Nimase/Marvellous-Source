#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ****p=NULL;
	
	int fir=0,sec=0,thi=0,fou=0,i=0,j=0,k=0,l=0;

	printf("Enter The Diomentons=");
	scanf("%d%d%d%d",&fir,&sec,&thi,&fou);

	p=(int ****)malloc(fir*sizeof(int***));
	for(i=0;i<fir;i++)
	{
	
        p[i]=(int ***)malloc(sec*sizeof(int**));
	}
	for(i=0;i<fir;i++)
	{
		for(j=0;j<sec;j++)
		{
			
			
				p[i][j]=(int **)malloc(thi*sizeof(int*));
			
		}
	}
	for(i=0;i<fir;i++)
	{
		for(j=0;j<sec;j++)
		{
			for(k=0;k<thi;k++)
				{
			       p[i][j][k]=(int *)malloc(fou*sizeof(int));
			   }
		}
	}

	printf("Enter The Values=");
	for(i=0;i<fir;i++)
	{
		for(j=0;j<sec;j++)
		{
			for(k=0;k<thi;k++)
			{
				for(l=0;l<fou;l++)
				{
		            scanf("%d",&p[i][j][k][l]);
				}
			}
		}
	}
	printf("Entered Element Are=");
	for(i=0;i<fir;i++)
    {
		for(j=0;j<sec;j++)
		{
			for(k=0;k<thi;k++)
			{
				for(l=0;l<fou;l++)
				{
			        printf("%d",p[i][j][k][l]);
				}
			}
		}
	}
	for(i=0;i<fir;i++)
	{
		for(j=0;j<sec;j++)
		{			
			for(k=0;j<sec;k++)
			{
				free (p[i][j][k]);
	     	}    
		}
	}	
	
	for(i=0;i<fir;i++)
	{
		for(j=0;j<sec;j++)
		{
			free(p[i][j]);
		}
    }
	for(i=0;i<fir;i++)
	{
	   free (p[i]);
	}
	free (p);
	return 0;
}
