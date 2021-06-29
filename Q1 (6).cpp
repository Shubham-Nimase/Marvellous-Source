#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int arr[],int iLength,int iNo)
{
	for(


















		int main()
	{
		int isize=0,iRet=0,iCnt=0.,iValue=0;
		int *p=NULL;
		BOOL bRet=FALSE;
		printf("Enter number of elements");
		scanf("%d",&isize);
		printf("Enter number of elemsents");
		scanf("%d",&isize);
		printf("Enter the number");
		scanf("%d",&ivalue);
		p=(int*)malloc(isize*sizeof(int));
		if(p==NULL)
		{
			printf("Unable to allocate memory");
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				printf("Enter element:%d",iCnt+1);
			}
			bRet=check(p,isize,ivalue);
			if(bRet==TRUE)
			{
				printf("Number is present ");
			}
			else
			{
				printf("Numbe is not present");
			}
			free(p);
			return 0;
		}

