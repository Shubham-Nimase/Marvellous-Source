#include<stdio.h>

int main()
{
	char ch;
	char Line[50];
	int Loc = 0;

	printf("Enter a line of text: \n");

	while ((ch = getchar()) != '\n')
	{
		Line[Loc] = ch;
		Loc++;
	}
	Line[Loc] = '\0';

	printf("The text you entered is: \n%s", Line);

	return 0;

}
