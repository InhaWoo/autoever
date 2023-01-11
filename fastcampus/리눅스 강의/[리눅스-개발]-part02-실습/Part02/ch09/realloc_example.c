#include <stdio.h>
#include <stdlib.h>

#define BUFLEN 12

int main()
{
	char *buf;
	buf = (char *)malloc(BUFLEN);
	if (!buf) {
	    perror("malloc error: ");
	    return -1;
	}

	sprintf(buf, "LinuxSystem");

	buf = (char *)realloc(buf, BUFLEN+11);
	if (!buf) {
	    perror("realloc error: ");
	    return -1;
	}

	sprintf(buf+BUFLEN-1, "Programming");
	printf("final buffer = %s\n", buf);

	free(buf);

	return 0;
}
