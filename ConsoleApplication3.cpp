#include<stdio.h>
float set[10][10], lambda[10][10], lam;
int i, j, n;
void accept(float a[10][10])
{
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d th row:\n", i + 1);
		for (j = 0; j < n; j++)
		{
			scanf_s("%f", &a[i][j]);
		}
	}
}

void display(float a[10][10])
{
	printf("You have entered elements as below:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%.1f\t", a[i][j]);
		}
		printf("\n");
	}
}

void lamb(float set[10][10])
{
	printf("Enter the value of lambda:\n");
	scanf_s("%f", &lam);
	printf("The lambda cut set is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (set[i][j] >= lam)
			{
				lambda[i][j] = 1;
			}
			else
			{
				lambda[i][j] = 0;
			}
			printf("%.0f\t", lambda[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	printf("Enter how many elements:\n");
	scanf_s("%d", &n);
	accept(set);
	display(set);
	lamb(set);
}


//////////////////////////////////////////////////////////////////////
/*

output:

Enter how many elements:
5
Enter the elements:
1 th row:
1
2
3
4
5
2 th row:
6
7
8
9
0
3 th row :
5
4
3
2
1
4 th row :
0
9
8
7
6
5 th row :
1
3
6
4
8
you have entered elements as below:
1.0	2.0	3.0	4.0	5.0
6.0	7.0	8.0	9.0	0.0
5.0 4.0 3.0 2.0 1.0
0.0 9.0 8.0 7.0 6.0
1.0 3.0 6.0 4.0 8.0
Enter the value of lambda:
4 
The lambda cut set is:
0 0 0 1 1
1 1 1 1 0
1 1 0 0 0
0 1 1 1 1
0 0 1 1 1
*/

//////////////////////////////////////////////////////////////////////
/*

output:

Enter how many elements:
3
Enter the elements:
1 th row:
3
2
3
2 th row:
4
3
2
3 th row :
2
3
4
4
3

you have entered elements as below:
3.0 2.0 3.0
4.0 3.0 2.0
2.0 3.0 4.0
Enter the value Of lambda:
5
The lambda cuts set is:
0 0 0
0 0 0
0 0 0
*/