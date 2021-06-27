#include<stdio.h>

void StrCpy(char Src[],char Dest[])
{

	int i = 0;
	if ((Src == NULL) || (Dest == NULL))
	{
		return;
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

void StrCpyX(char *Src, char *Dest)
	{

	
	if ((Src == NULL) || (Dest == NULL))
	{
		return;
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

	printf("Enter your String:\n");
	scanf_s("%[^'\n']s", Arr,sizeof(Arr));
	
	StrCpy(Arr, Brr);

	printf("Your String is:%s\n",Brr);
	
	return 0;
}