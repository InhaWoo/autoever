#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);

	printf("time: %s", ctime(&t));

	return 0;
}
