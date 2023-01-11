#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);
	struct tm *tm;

	tm = gmtime(&t);
	if (!tm) {
		perror("gmtime error: ");
		return -1;
	}

	printf("%d %d %d %d:%d:%d\n", tm->tm_year+1900, tm->tm_mon+1, tm->tm_mday,
			tm->tm_hour, tm->tm_min, tm->tm_sec);

	return 0;
}
