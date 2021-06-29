#include<stdio.h>

void Display(char ch)
{
    
	if((ch=='A')||(ch=='a'))
	{
		printf("Your Exam Is 7 AM");
	}
	else if((ch=='B')||(ch=='b'))
	{
		printf("Your Exam Is 8.30 AM");
	}
	else if((ch=='C')||(ch=='c'))
	{
		printf("Your Exam Is 9.20 AM");
	}
	else if((ch=='D')||(ch=='d'))
	{
		printf("Your Exam Is 10.30 AM");
	}
	else 
	{
		printf("Invalid Input");
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
		