#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1;
#define ERRSIZE -1;


int CountEven(int arr[], int iSize)
{
	int iCnt = 0;
	int iFreq = 0;
	if (arr == NULL)
	{
		return ERRMEMORY;
	}
	if (iSize <= 0)
	{
		return ERRSIZE;
	}

	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if (arr[iCnt] % 2 == 0)
		{
			iFreq++;
		}
	}
	return iFreq;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	int iCnt = 0;
	int* ptr = NULL;

	printf("Enter the value of N:");
	scanf_s("%d", &iValue);

	if (iValue == 0)
	{
		printf("Error:Invalid Input!!\n");
		return -1;
	}

	ptr = (int*)malloc(4 * iValue);
	if (ptr == NULL)
	{
		printf("Error:unable to allocate Memory\n");
		return -1;
	}

	printf("Enter the values of array:\n");
	for (iCnt = 0; iCnt < iValue; iCnt++)
	{
		scanf_s("%d", &ptr[iCnt]);
	}

	iRet = CountEven(ptr, iValue);

	printf("Frequency of even numbers is:%d", iRet);


	return 0;
}