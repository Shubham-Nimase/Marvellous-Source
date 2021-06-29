#include<stdio.h>
#include<stdlib.h>
int diff(int Arr[],int iLength)
{
	int osum=0,esum=0;
	
	int icnt=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return 0;
	}
	for(icnt=0;icnt<iLength;icnt++)
	{
		if((Arr[icnt]%2)==0)
		{
			esum=esum+Arr[icnt];
		}
		else
		{
			osum=osum+Arr[icnt];
		}
	}
	return esum-osum;
}
int main()
{
	int isize=0,iRet=0,icnt=0;
	int*p=NULL;
	printf("Enter number of element");
	scanf("%d",&isize);
	p=(int*)malloc(isize*sizeof(int));
	if(p==NULL)
	{
		printf("unable to allocate memory");
		return-1;
	}
	printf("Enter %d element", iLength);
	for(icnt=0;i<iLength;icnt++)
	{
		printf("Enter element:%d"icnt+1);
		scanf("%d",&p[icnt]);
	}
	iRet=diff(p,isize);
	printf("Result is %d",iRet);

free(p);
return 0;
}