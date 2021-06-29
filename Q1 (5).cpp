#include<stdio.h>
void strlwrX(char *str)
{
	char ch='\0';
	if(str==NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
       str++;
	}
}

int main()
{
	char Arr[20];

		printf("Enter string");
	    scanf("%[^'\n']s",Arr);
		strlwrX(Arr);
		printf("Modify String is=%s\n",Arr);
		return 0;



}