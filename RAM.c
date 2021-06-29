#include<stdio.h>
#include<conio.h>
int binary_step(int s[], int w[], int n)
{
	int i, m = 0;
	int p[n];
	for (i = 0; i < n; i++)
	{
		p[i] = s[i] + w[i];
	}
	for (i = 0; i < 0; i++)
	{
		m = m + p[i];
	}
	if (m < 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int  linear_act_fun(int s[], int w[], int n)
{
	int i, m = 0;
	int p[n];
	for (i = 0; i < n; i++)
	{
		p[i] = s[i] + w[i];
	}
	for (i = 0; i < n; i++)
	{
		m = m + p[i];
	}
	return m;

}
void main()
{
	int i, j, n, X;
	printf("\n enter value of signals ");
	scanf("%d", &n);
	int s[n];
	int w[n];
	printf("\n enter signals ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	printf("\n enter weights ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &w[i]);
	}
	X = binary_step(s, w, n);
	printf("\n binary_step funcion value = %d", X);

	X = linear_act_fun(s, w, n);
	printf("\n linear_act funcion value = %d", X);

}
