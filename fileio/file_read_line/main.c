#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp = NULL;
	int line_num = 0;
	char *filepath = "hello.txt";
	char line_rbuff[64] = {0};

	printf("file read line test\n");
	system("echo \"hello\" >hello.txt");
	system("echo \"world\" >>hello.txt");
	system("echo \"xuxiaopaoyyds\" >>hello.txt");
	
	fp = fopen(filepath, "r");

	if(NULL == fp)
	{
		goto end;
	}

	while(NULL != fgets(line_rbuff, 100, fp))
	{
		printf("line[%d] = %s", line_num, line_rbuff);
		memset(line_rbuff, 0, sizeof(line_rbuff));
		line_num++;
	}

	fclose(fp);

end:
	return 0;
}
