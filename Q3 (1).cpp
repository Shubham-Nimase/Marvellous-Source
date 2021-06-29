#include<stdio.h>
void StrCpyX(char *src,char *dest)
{
	if(src==NULL)
	{

		return ;
	}
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*dest=*src;
			*dest++;
		}
		src++;
	}
	*src='\0';
}
int main()
{
	char arr[30]="Marvellous Multi OS";
    char brr[30];

	StrCpyX(arr,brr);
	printf("%s",brr);
	return 0;
}
