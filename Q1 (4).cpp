#include<stdio.h>
void DisplayASCII()
{
	int icnt=0;
	for(icnt=0;icnt<256;icnt++)
	{
		printf("%d %c %x\n",icnt,icnt,icnt);
	}
}
int main()
{
	DisplayASCII();
	return 0;
}

