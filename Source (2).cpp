#include<stdio.h> //for windows machine include io.h
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd = 0, ret = 0;
	char arr[] = "Marvellous";
	char brr[20];

	fd = creat("Marvellous.txt", 0x777);
	
	if (fd == -1)
	{
		printf("Unable to create file!!\n");
	}
	else
	{
		printf("File is succesfully created with file descriptor:%d\n", fd);
	}


	fd =open("Marvellous.txt", O_RDWR);

	if (fd == -1)
	{
		printf("Unable to open file!!\n");
	}
	else
	{
		printf("File is succesfully open\n",fd);
	}

	return 0;

}
