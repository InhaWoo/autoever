#include <stdio.h>
#include <sys/time.h>

int main()
{
	struct timeval tv;
	int ret;

	ret = gettimeofday(&tv, NULL);
	if (ret == -1) {
		perror("gettimeofday error: ");
		return -1;
	}

	printf("seconds = %ld, useconds = %ld\n", (long)tv.tv_sec, (long)tv.tv_usec);
}
