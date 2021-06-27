#include<stdio.h>

void Display(int no)
{
	int i = no;

	if (no > 0)
	{
		printf("%d", no);
		no--;
	Display(no);
	}
	printf("%d", i);

}
int main()
{
	int value = 0;

	printf("Enter any Number :\n");
	scanf_s("%d", &value);

	Display(value);
	return 0;
}
