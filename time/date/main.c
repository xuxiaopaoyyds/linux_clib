#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void)
{
	char tmp[64] = {0};

	printf("time date test\n\n");
	time_t t = time(NULL);
	memset(tmp, 0, sizeof(tmp));
	strftime( tmp, sizeof(tmp), "%Y-%m-%d %X ",localtime(&t) );// 2017-05-16 17:00:00
	printf("%s\n", tmp);

	memset(tmp,0,sizeof(tmp));
	strftime( tmp, sizeof(tmp), "%Y-%m-%d",localtime(&t) );// 2017-05-16
	printf("%s\n", tmp);

	memset(tmp,0,sizeof(tmp));
	strftime( tmp, sizeof(tmp), "%X",localtime(&t) );// 17:00:00
	printf("%s\n",tmp);

	return 0;
}
