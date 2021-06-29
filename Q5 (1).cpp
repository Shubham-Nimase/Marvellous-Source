#include<stdio.h>
void StrCatX(char *src,char *dest)
{
	if(src==NULL)
	{
		return;
	}
	while(*src!='\0')
	{
		src++;
    }
	while(*dest!='\0')
		{
			*src=*dest;
			src++;
			dest++;
		
		}
		*dest='\0';
}
int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30]=" Logic Bulding";
	StrCatX(arr,brr);
	printf("%s",arr);

	return 0;
}
