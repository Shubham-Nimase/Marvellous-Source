#include<stdio.h>
void Display(char ch)
{

	if((ch>='A')&&(ch<='Z'))
	{
		printf("Decimal=%d");
		printf("Octal=%d");
		printf("Hexadecimal=%x");

	}
}
int main()
{
	char cValue='\0';

    printf("Enter Character");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
	
}