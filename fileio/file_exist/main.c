#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *filepath = "hello.txt";

	printf("file exist test\n");

	if(access(filepath, F_OK))
	{
		printf("file not exist\n");
	}

	system("touch hello.txt");
	printf("touch hello.txt\n");

	if(0 == access(filepath, F_OK))
	{
		printf("file exist\n");
	}

	return 0;
}
