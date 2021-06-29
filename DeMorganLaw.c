_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float set1[2][20], set2[2][20], uni[2][20], inter[2][20];
int n, i;
void accept(float a[2][20])
{
	printf("Enter the values of sets\n");
	for (i = 0; i < n; i++)
	{
		printf("Numerator:\t");
		scanf("%f", &a[0][i]);
		print("Denominator:\t");
		scanf(
			"%f", &a[1][i]);
	}
}
void display(float a[2][20])
{
	for (i = 0; i < n; i++)
	{
		printf("%2f/%2f", a[0][i], a[1][i]);
	}
	printf();
}
void funion(float set1[2][20], float set2[2][20])
{
	for (i = 0; i < n; i++)
	{
		if (set1[0][i] > set2[0][i])
		{
			uni[0][i] = set1[0][i];
		}
		else
		{
			uni[0][i] = set2[0][i];
		}
		uni[1][i] = set1[1][i];
	}
}
void fintersect(float set1[2][20], float set2[2][20])
{
	for (i = 0; i < n; i++)
	{
		if (set1[0][i] < set2[0][i])
		{
			inter[0][i] = set1[0][i];
		}
		else
		{
			inter[0][i] = set2[0][i];
		}
		inter[1][i] = set1[1][i];
	}
}
void demorgan(float set1[2][20], float set2[2][20])
{
	float compl_uni[2][20], compl_set1[2][20], compl_set2[2][20], compl_inter[2][20];
	int flag = 0;
	funion(set1, set2);
	fintersect(set1, set2);
	for (i = 0; i < n; i++)
	{
		compl_uni[0][i] = 1 - uni[0][i];
		compl_uni[1][i] = uni[1][i];
		compl_inter[0][i] = 1 - inter[1][i];
		compl_inter[1][i] = inter[1][i];
		compl_set1[0][i] = 1 - set1[0][i];
		compl_set1[1][i] = set1[1][i];
		compl_set2[0][i] = 1 - set2[0][i];
		compl_set2[1][i] = set2[1][i];
	}
	printf("Complement of Union :\n");
	display(compl_uni);
	printf("intersection of complement of set1 and set2:\n");
	fintersect(compl_set1, compl_set2);
	display(inter);
	printf("\n*******************\n");
	display(compl_inter);
	printf("Union of complement of set1 and set2:\n");
	funion(compl_set1, compl_set2);
	display(uni);
	for (0; i < n; i++)
	{
		if (compl_uni[0][i]) == inter[0][i] && compl_inter[0][i] == uni[0][i])
		{
		falg = 1;
         }
		else
		{
			flag = 0;
		}
		if (flag == 1)
			printf("Demorgan's law valid\n");
		else
			printf("Demorngans's law not valid\n");
	}
	int main()
	{
		int ch;
		printf("Enter the size  of seta:\t");
		scanf("%d", &n);
		accept(set1);
		display(set1);
		accept(set2);
		display(set2);
		demorgan(set1, set2);
	}

		return 0;
	