#include<stdio.h>
void StrcpySmall(char *src,char *dest)
{
	if(src==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
	*src='\0';
}
int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	StrcpySmall(arr,brr);
	printf("%s",brr);
	return 0;
}