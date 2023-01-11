#include <stdio.h>
#include <time.h>

int main()
{
	time_t t;

	printf("current time: %ld\n", (long)time(&t));
	printf("the same value: %ld\n", (long)t);

	return 0;
}
