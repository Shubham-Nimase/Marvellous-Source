#include<stdio.h>
int main()
{
	int no = 11;
	//int p = no;
	int*p = &no;

	printf("the value of no is %d\n",no);
	printf("the adress of no is %d\n",&no);
	printf("stored address int pointer p %d\n",p);
	printf("pointed value int pointer p %d\n",*p);
	printf("address of pointer %d\n",&p)
return 0;


}