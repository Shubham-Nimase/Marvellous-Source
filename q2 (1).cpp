#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
	char h='\0';
	if(str==NULL)
	{
		return -1;
	}
	while(*str='\0')
	{
		if(*str==h)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
      str++;
	}
}

int main()
{
	char Arr[20];
	char cvalue='\0';
	BOOL bRet=FALSE;

		printf("Enter string");
	    scanf("%[^'\n']s",Arr);
		printf("Enter the character");
		scanf("%c",&cvalue);

		bRet=ChkChar(Arr,cvalue);
		
		if(bRet==TRUE)
		{
			printf("Character found");
		}
		else
		{
			printf("Character not found");
		}

		
		return 0;

}