#include<stdio.h>
int SerchFirstOccurance ( char *str, char ch)
{
	int i = 0;

	while (*str !='\0')
	{
		if (*str == ch)
		{
			break;
		}
		i++;
		str++;
	}
	
	if (*str == ch)
	{
		return i;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char arr[50];
	char ch = '\0';
	int iRet = 0;
	printf("Enter your String:");
	scanf_s("%s", arr,sizeof(arr));

	printf("Enter any Character:");
	scanf_s(" %c", &ch);

	iRet = SerchFirstOccurance(arr, ch);
	
	if (iRet == -1)
	{
		printf("There is no character in the string!!");
	}
	else
	{
	printf("First Occurance Index is:",iRet);
	}
}