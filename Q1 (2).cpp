#include<stdio.h>
void strcpy(char *src,char *dest)
{    
	char temp;
	char *start=NULL;
	char *end=NULL;
	if((src==NULL)&&(dest==NULL))
	{
		return;
	}
	start=src;
	end=src;
	
	while(*src!='\0')
	{  
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char arr[30]="marvelloues Python";
	char brr[30];

	strcpy(arr,brr);
	printf("%s",brr);
	
	return 0;

}
