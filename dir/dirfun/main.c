#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(void)
{
	char *dir_path = "dirtest";
	DIR *dir_p = NULL;
	struct dirent *ptr = NULL;

	printf("dir test\n");
	system("mkdir dirtest");
	system("touch dirtest/hello.txt");
	system("touch dirtest/world.txt");
	system("touch dirtest/xuxiaopaoyyds.txt");

	dir_p = opendir(dir_path);

	if(NULL == dir_p)
	{
		goto end;
	}
        while(1)
	{
		ptr = readdir(dir_p);
		if(NULL != ptr)
		{
			printf("ptr->d_name = %s\n", ptr->d_name);
		}
		else
		{
			break;
		}
	}

end:
	return 0;
}
