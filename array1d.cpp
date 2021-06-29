#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p=NULL;
	int isize=0,icnt=0;
	printf("Enter number of elements");
	scanf("%d",&isize);
	p=(int *)malloc(isize * sizeof(int));

	printf("enter the valus");
	for(icnt=0;icnt<isize;icnt++)
	{
		scanf("%d",&p[icnt]);
	}

	printf("Entered elements are");
	for(icnt=0;icnt<isize;icnt++)
		{
			printf("%d\t",p[icnt]);
		}
		free(p);
		return 0;
	}
