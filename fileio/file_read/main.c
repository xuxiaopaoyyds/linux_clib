#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp = NULL;
	char *filepath = "hello.txt";
	char rbuff[64] = {0};
	int ret = 0;
	int len = 0;

	printf("file read test\n");
	system("echo \"hello\" >hello.txt");
	system("echo \"world\" >>hello.txt");
	system("echo \"xuxiaopaoyyds\" >>hello.txt");
	
	fp = fopen(filepath, "r");

	if(NULL == fp)
	{
		goto end;
	}

	memset(rbuff, 0, sizeof(rbuff));
	len = 1;
	ret = fread(rbuff, 1, len ,fp);
	printf("fread ret = %d\n", ret);
	printf("rbuff = %s\n", rbuff);

	memset(rbuff, 0, sizeof(rbuff));
	len = 10;
	ret = fread(rbuff, 1, len ,fp);
	printf("fread ret = %d\n", ret);
	printf("rbuff = %s\n", rbuff);


	memset(rbuff, 0, sizeof(rbuff));
	len = 40;
	ret = fread(rbuff, 1, len ,fp);
	printf("fread ret = %d\n", ret);
	printf("rbuff = %s\n", rbuff);
	fclose(fp);

end:
	return 0;
}
