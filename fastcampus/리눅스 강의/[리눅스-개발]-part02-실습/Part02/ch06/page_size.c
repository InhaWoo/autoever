#include <stdio.h>
#include <unistd.h>
#include <sys/user.h>

int main()
{
	long page_size = sysconf(_SC_PAGESIZE);
	int page_size2 = getpagesize();
	int page_size3 = PAGE_SIZE;

	printf("%ld %d %d\n", page_size, page_size2, page_size3);
	return 0;
}
