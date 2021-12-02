#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	FILE *fp = NULL;
	char wbuff[64] = {0};
	char rbuff[64] = {0};
	char* filepath = "hello.txt";
	int len = 0;

	printf("file write cover\n");

	system("echo \"hello\" >hello.txt");
	printf("echo \"hello\" >hello.txt\n");
	fp = fopen(filepath, "a+");

	if(NULL == fp)
	{
		goto end;
	}

	len = 10;
	memset(wbuff, 0, sizeof(wbuff));
	snprintf(wbuff, sizeof(wbuff), "%s", "hello");
	fwrite(wbuff, len, 1, fp);
	printf("write wbuff = %s\n", wbuff);
	fclose(fp);

	fp = fopen(filepath, "r");

	if(NULL == fp)
	{
		goto end;
	}

	len = 10;
	fread(rbuff, 1, len, fp);
	fclose(fp);
	
	printf("file read:\n");
	printf("%s\n",rbuff);

end:
	return 0;
}
