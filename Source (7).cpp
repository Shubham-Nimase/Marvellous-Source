#include<stdio.h>
void Pattern(int irow, int icol)
{
	int i,j = 0;
	int iCnt = 0;

	for (i = 0; i < irow; i++)
	{
		for (j = 1; j <= irow; j++)
		{
			iCnt++;

			printf("%d\t",iCnt);

			if (iCnt == 9)
			{
				iCnt = 0;
			}
		}
		printf("\n");

	}
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;

	printf("Enter no. of rows and columns:");
	scanf_s("%d%d",&iValue1,&iValue2);

	Pattern(iValue1, iValue2);

	return 0;
}