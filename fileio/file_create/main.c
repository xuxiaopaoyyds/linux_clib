#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int fd = -1;
	char *filepath = "hello.txt";
	char buffer[20] = "hello world\n";

	printf("file open O_RDWR | O_APPEND | O_CREAT, S_IRWXU\n");

	fd = open(filepath, O_RDWR | O_APPEND | O_CREAT, S_IRWXU);
	if(fd >= 0)
	{
		write(fd, buffer, sizeof(buffer));
		close(fd);
	}

	return 0;
}
