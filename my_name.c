#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];

    printf("enter your name: ");
    fflush(stdout);

    if (scanf("%49s", name) != 1) {
        printf("failed to read name\n");
        return 1;
    }

    printf("your name is %s\n", name);
    return 0;
}