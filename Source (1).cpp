#include<stdio.h>
void main()
{
	int i = 4, b = 5;
	b = i++;
	printf("%d,%d,%d,%d", ++b, i++, --i, b--);

}