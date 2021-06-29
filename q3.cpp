#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0
 
typedef int BOOL;

// BOOL Check(int arr[],int)

BOOL Check(int arr[],int ilength)
{
	int icnt=0;

	if((arr==NULL)||(ilength<=0))
	{
		return -1;
	}
	for(icnt=0;icnt<ilength;icnt++)
	{
		if(arr[icnt]==11)
	{
	      break;
	}
	}
		if(arr[icnt]==11)
		{
			return TRUE;

		}
		else
		{
			return FALSE;
		}
     
	
	
}

int main()
{
	int isize=0,iret=0,icnt=0;
	int *p=NULL;
	BOOL bret=FALSE;

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
	bret=Check(p,isize);

   if(bret==TRUE)
   {
	   printf("11 is present");
   }
   else
   {
	   printf("11 is absent");
   }
	free(p);

	return 0;
}
 