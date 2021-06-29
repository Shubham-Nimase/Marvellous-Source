#include<stdio.h>
int main()
{
	int i = 11, j = 21, k = 51;

	int* Arr[4];
	Arr[0] = &j;
	Arr[1] = &i;
	Arr[2] = NULL;
	Arr[3] = &k;

	int* x = &(Arr[3]);
	int* p = Arr;
	int** q = &p;

	printf("%d", Arr);
}