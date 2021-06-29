#include<stdio.h>
#include<math.h>
float set1[2][20], set2[2][20], set3[2][20], set4[2][20], result[10][10];
int n;
void main()
{

	printf("Enter the size of sets\t");
	scanf_s("%d", &n);
	accept(set1);
	display(set1);
	accept(set2);
	display(set2);
	funion(set1, set2);
	display(set3);
	fintersect(set1, set2);
	display(set3);
	complement(set1);
	display(set4);
	alg_product(set1, set2);
	display(set3);
	alge_sum(set1, set2);
	display(set3);
	cart_product(set1, set2);
	display(set3);


}
void accept(float m[2][20])
{
	int i;
	printf("Enter the values of set\n");
	for (i = 0; i < n; i++)
	{
		printf("Numerator\t");
		scanf_s("%f", &m[0][i]);
		printf("Denominator\t");
		scanf_s("%f", &m[1][i]);
	}
}

void display(float m[2][20])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%.2f/%.2f,", m[0][i], m[1][i]);
	}
	printf("\n");
}

void funion(float set1[2][20], float set2[2][20])
{
	int i;
	printf("Union :- \n");
	for (i = 0; i < n; i++)
	{
		if (set1[0][i] > set2[0][i])
		{
			set3[0][i] = set1[0][i];
		}
		else
		{
			set3[0][i] = set2[0][i];
		}
		set3[1][i] = set1[1][i];
	}
}

void fintersect(float set1[2][20], float set2[2][20])
{
	int i;
	printf("Intersection :- \n");
	for (i = 0; i < n; i++)
	{
		if (set1[0][i] < set2[0][i])
		{
			set3[0][i] = set1[0][i];
		}
		else
		{
			set3[0][i] = set2[0][i];
		}
		set3[1][i] = set1[1][i];
	}
}

void complement(float m[2][20])
{
	int i;
	for (i = 0; i < n; i++)
	{
		set4[0][i] = 1 - m[0][i];
		set4[1][i] = m[1][i];
	}
}

void alg_product(float set1[2][20], float set2[2][20])
{
	printf("The algebraic product is:\n");
	for (int i = 0; i < n; i++)
	{
		set3[0][i] = set1[0][i] * set2[0][i];
		set3[1][i] = set1[1][i];
	}
}
void alge_sum(float set1[2][20], float set2[2][20])
{
	printf("The algebraic Sum is:\n");
	for (int i = 0; i < n; i++)
	{
		set3[0][i] = (set1[0][i] + set2[0][i]) - (set1[0][i] * set2[0][i]);
		set3[1][i] = set1[1][i];
	}
}

void cart_product(float set1[2][20], float set2[2][20])
{
	int j;
	printf("The Cartesian Product is:\n");
	for (int i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			set3[0][i] = (set1[0][i] > set2[0][j]) ? set2[0][j] : set1[0][i];
			printf("%f  ", set3[0][j]);
		}
		printf("\n");
	}
	printf("\n");
}

