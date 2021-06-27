#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char name[20] = { '\0' };
	int fd = 0;    //file descripter

	printf("Enter file name\n");
	scanf_s("%s", name,sizeof(name));
	
	fd =open(name, O_RDWR);  // file gets opened with read and write mode
	if (fd == -1)
	{
		printf("Unable to Open File\n");
	}
	else
	{
		printf("File Succesfully opened with fd %d", fd);
	}
	return 0;
}