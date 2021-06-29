#include<stdio.h>
int CountCapital(char *str)
	{
		int i=0;
		int j=0;
 
		
		if(str==NULL)
		{
			return -1;
		}
		while(*str!='\0')
		{
			if((*str>='a')&&(*str<='z'))
			{
				i++;
			}
			else if((*str>='A')&&(*str<='Z'))
			{
				j++;
			}
			str++;
		}
return i-j;
}
int main()
{
	char Arr[30];
	int iRet=0;

	printf("Enter String");
	scanf("%[^'\n']s",Arr);

	iRet=CountCapital(Arr);

	printf("Capital Latter Is %d",iRet);

	return 0;

}


