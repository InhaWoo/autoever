#include <stdio.h>
#include <time.h>

int main()
{
        time_t t = time(NULL);
        struct tm *tm1, *tm2;

        tm1 = gmtime(&t);
        tm2 = localtime(&t);
        if (!tm1 || !tm2) {
                perror("gmtime, localtime error: ");
                return -1;
        }

        printf("%d %d %d %d:%d:%d\n", tm1->tm_year+1900, tm1->tm_mon+1, tm1->tm_mday,
                        tm1->tm_hour, tm1->tm_min, tm1->tm_sec);
        printf("%d %d %d %d:%d:%d\n", tm2->tm_year+1900, tm2->tm_mon+1, tm2->tm_mday,
                        tm2->tm_hour, tm2->tm_min, tm2->tm_sec);

        return 0;
}

