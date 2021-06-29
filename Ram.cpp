#include<Stdio.h>

void pattern(int no1,int no2)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= no1; i++)
	{

		for (j = 1; j <= no2; j++)
		{
			if (i % 2 != 0)
			{
				printf("%d\t", i);
			}
			else
			{
				printf("%d\t", i);
			}
		}
		printf("\n");
	}


}

int main()
{
	int value1 = 0;
	int value2 = 0;
	printf("Enter the number of rows and columns=");
	scanf_s("%d %d", &value1, &value2);

	pattern(value1,value2);

		return 0;
}
