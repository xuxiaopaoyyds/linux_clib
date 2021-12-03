#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{	
	struct stat stat_st;
	int file_size = 0;

	printf("stat test\n");
	
	system("echo \"hello world xuxiaopaoyyds\" >hello.txt");

	stat("hello.txt", &stat_st);

	file_size = stat_st.st_size;
	printf("hello.txt file size = %d\n",file_size);

	return 0;
}
