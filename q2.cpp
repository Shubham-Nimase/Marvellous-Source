#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int CountEven(int arr[],int ilength)
{
	int icnt=0,Efreq=0,Ofreq=0;
	if((arr==NULL)||(ilength<=0))
	{
		return -1;
	}
	for(icnt=0;icnt<ilength;icnt++)
	{
		if((arr[icnt]%2)==0)
		{
			Efreq++;
		}
		else
		{
			Ofreq++;
		}
	}



	return Efreq-Ofreq;
}


 int main()
{
	int isize=0,iret=0,icnt=0;
	int *p=NULL;

	printf("Enter number of elements\n");
	scanf("%d",&isize);

	p=(int *)malloc(isize * sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return-1;
	}

	printf("Enter %d elements\n",isize);

	for(icnt=0;icnt<isize;icnt++)
	{
		printf("enter element: %d\n",icnt+1);
		scanf("%d",&p[icnt]);
	}

	iret=CountEven(p,isize);
	printf("Result is %d\n",iret);
	free(p);
	return 0;
}


























