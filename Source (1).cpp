#include<stdio.h>
int SerchLastOccurance(char* str, char ch)
{
	int *iStart, *iEnd, 
	char *Temp = 0;

	while (*str != '\0')
	{
		iEnd++;
	}
	iEnd--;

	while (*iStart < *iEnd)          //unchecked programm
	{
		*Temp = *iStart;
		*iStart = *iEnd;
		*iEnd = *Temp;

		iStart++;
		iEnd--;

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

