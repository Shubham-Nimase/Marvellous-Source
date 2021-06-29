#include<stdio.h>

void strncpyX(char *src,char *dest,int iCnt)
{
	if(src==NULL)
	{
		return; 
	}
	while((*src!='\0')&&(iCnt!=0))
	{
		*dest=*src;
		dest++;
		src++;
		iCnt--;
	}

*src='\0';
}
int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30];
	//int i=10;
	strncpyX(arr,brr,10);
	printf("%s",brr);
	return 0;

}