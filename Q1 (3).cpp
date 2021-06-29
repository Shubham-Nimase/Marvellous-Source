#include<stdio.h>

void strcopy(char *src,char *dest)
{
	if(src==NULL)
	{
		return;
	}
	while(*src>'\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char Arr[30]="Marvellous Multi OS";
	char Brr[30];
	strcopy(Arr,Brr);
	printf("%s\n",Brr);
	return 0;
}