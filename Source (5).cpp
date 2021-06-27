#include<stdio.h>

void Dispaly_Binary(int iNo)
{
	int iRem = 0;

	if (iNo < 0)
	{
		iNo = -iNo;
	}

	while (iNo != 0)
	{
		iRem = iNo % 2;
		iNo = iNo / 2;
		printf("%d", iRem);
	}
}

int main()
{
	int iNo = 0;

	printf("Enter any Decimal Number:");
	scanf_s("%d", &iNo);

	Dispaly_Binary(iNo);

	return 0;
}