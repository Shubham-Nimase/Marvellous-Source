 
#include<stdio.h>

float set1[10][10], set2[10][10], maxmin[10][10], min1[10], max= 0.0, maxpro[10][10];
int i, j, k, row1, col1, row2, col2;

void accept_first(float a[10][10])
{
	printf("Enter thow many rows and columns for set1:\n");
	scanf("%d%d", &row1, &col1);
	for (i = 0; i < row1; i++)
	{
		printf("Enter the elements for %dth row:\n", i + 1);
		for (j = 0; j < col1; j++)
		{
			scanf("%f", &a[i][j]);

		}
	}
	printf("you  have enter elements as below:\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			printf("%1f\t", a[i][j]);
		}
		printf("\n");
	}
}
void accept_second(float a[10] [10])
{
	printf("Enter how many rows and columns for second set:\n");
	scanf("%d%d", &row2, &col2);
	for (i = 0; i < row2; i++)
	{
		printf("Enter the elements for %dth rows:\n", i + 1);
		for (j = 0; j < col2; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
	printf("you have entered elemnts as belows:\n");

	for (i = 0; i < row2; i++)
	{
		for (j = 0; k < col2; j++)
		{
			printf("%1f\t", a[i][j]);
		}
		printf("\n");
	}

}
void max_min(float set1[10][10], float set2[10][10])
{
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col2; j++)
		{
			for (k = 0; k < row2; k++)
			{
				if (set1[i][k] <= set2[k][j])
				{
					min1[k] = set1[i][k];
				}
				else
				{
					min1[k] = set2[k][j];
				}
				if (min1[k] > max)
				{
					max = min1[k];
				}

			}
			maxmin[i][j] = max;
max = 0.0;
		}
	}
	printf("The maxmin values is:\n");
	for(i=0;i<row1;i++)
	{
		for (j = 0; j < col2; j++)
		{
			printf("%2f", maxmin[i][j]);
		}
		printf("\n");
		}
	}
void max_product(float set1[10][10],float set2[10][10])
{
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col2; j++)
		{
			for (k = 0; k < row2; k++)
			{
				min1[k] = set1[i][k] * set2[k][j];
				if (min1[k] > max)
				{
					max = min1[k];
				}
			}
			maxpro[i][j] = max;
			max = 0.0;
		}
	}
	printf("The maxproduct is:\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col2; j++)
		{
			printf("%2f",maxpro[i][j]);
		}
		printf("\n");


	}
}
void main()
{
	accept_first(set1);
	accept_second(set2);
	max_min(set1, set2);
	max_product(set1, set2);
}