#include <stdio.h>
#include <sys/time.h>

int main (void)
{
	struct timeval tv;

	printf("time tick test\n");

	gettimeofday(&tv, NULL);

	printf("tv_sec = %06ld, tv.tv_usec = %06ld\n", tv.tv_sec, tv.tv_usec);
	return 0;
}
