#include<stdio.h>
#include<malloc.h>
#include<io.h>
int main()
{
	int i = 0, j = 0,irow=0,icol=0;
	int** P = NULL;
    
	printf("Enter the Rows");
	P = (int**)malloc(irow * sizeof(int*));
	scanf_s("%d", &irow);
	for (i = 0; i < irow; i++)
	{
		printf("Enter Colums");
		scanf_s("%d", &icol);
		P[i] = (int*)malloc(icol * sizeof(int));
		for (j = 0; j < icol; j++)
		{
			scanf_s("%d", &P[i][j]);
		}

	}
	for (i = 0; i < irow; i++)
	{
		free(P[i]);
	}
	free (P);
	return 0;
}