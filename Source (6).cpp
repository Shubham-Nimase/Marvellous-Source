#include<stdio.h>
int Strlen(char str[])
{
	int iCnt = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			iCnt++;
		}
		i++;
	}
	return iCnt;
}

int main()
{

	char arr[30];
	int iRet = 0;

	printf("Enter the string=");
	scanf_s("%[^'\n']s", arr);

	iRet = Strlen(arr);

	printf("String Length is: %d\n", iRet);

	return 0;
}