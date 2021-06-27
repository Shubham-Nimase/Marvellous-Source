#include<stdio.h>
int SerchLastOccurance(char str[], char ch)
{
	int i = 0;
	int iPos = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			iPos = i;
			break;
		}
		i++;
		str++;
	}
	if (str[i] == ch)
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
	scanf_s("%[^'\n']s", arr,sizeof(arr));

	printf("Enter any Character:");
	scanf_s(" %c", &ch);

	iRet = SerchLastOccurance(arr, ch);


	if (iRet == -1)
	{
		printf("There is no character in the string!!");
	}
	else
	{
		printf("Last Occurance Index is:",iRet);

	}
}