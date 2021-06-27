#include<stdio.h>

void StrCat(char Src[], char Dest[])
{

	int i = 0;
	if ((Src == NULL) || (Dest == NULL))
	{
		return;
	}
	while (Dest[i] != '\0')
	{
		Dest++;
	}

	while (Src[i] != '\0')
	{
		Dest[i] = Src[i];
		i++;
	}
	Dest[i] = '\0';

}


/*

//By using Pointer

void StrCatX(char *Src, char *Dest)
	{


	if ((Src == NULL) || (Dest == NULL))
	{
		return;
	}
	
	while (*Dest!= '\0')
	{
		*Dest;
	}

	while (*Src!= '\0')
	{
		*Dest= *Src;
		Src++;
		Dest++;

	}
	*Dest= '\0';

}
*/
int main()
{
	char Arr[30];
	char Brr[30];

	printf("Enter your First String:\n");
	scanf_s("%[^'\n']s", Arr,sizeof(Arr));

	printf("Enter your Second String:\n");
	scanf_s("%[^'\n']s", Brr, sizeof(Brr));

	StrCat(Arr, Brr);

	printf("Your Whole String is:%s\n");

	return 0;
}