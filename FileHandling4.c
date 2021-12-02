#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;

	char Fname[30];
	char Data[7];

	printf("Enter File Name\n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;	// Return to OS
	}
	else
	{
		printf("File succesfully Opned with FD :%d\n",fd);
	}

	iRet = read(fd,Data,6);  // 6 letters can read

	printf("%d bytes gets successfully read from the file\n",iRet);
	printf("Data from the file is :%s\n",Data);


	return 0;
}