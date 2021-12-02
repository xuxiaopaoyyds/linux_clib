#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	char *filepath = "hello.txt";
	int file_size = 0;
	FILE *fp = NULL;

	printf("get file len test\n");
	system("echo \"hello world xuxiaopao\" >hello.txt");

	fp = fopen(filepath, "r");

	if(fp < 0)
	{
		printf("fd open err\n");
		goto end;
	}

	fseek(fp, 0L, SEEK_END);
	file_size = ftell(fp);
	fclose(fp);

	printf("get file len = %d\n", file_size);

end:
	return 0;
}
