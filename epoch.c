#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int print_new_line;
    struct tm *pTime;
    for(int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-nl") == 0) {
            print_new_line = 1;
        }
        else {
            printf("unknown option(s) valid option(s) are:\n");
            printf("-nl : print a new line after the epoch time\n");
            return 1;
        }
    }
    if (print_new_line == 1) {
        printf("%d\n", time(NULL));
    }
    else {
        printf("%d", time(NULL));
    }
    return 0;

}
