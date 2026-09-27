#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("enter your name: ");
    fflush(stdout);

    if (fgets(name, sizeof name, stdin) == NULL) {
        printf("failed to read name\n");
        return 1;
    }

    name[strcspn(name, "\n")] = '\0'; /* drop the newline fgets keeps */

    printf("your name is %s\n", name);
    return 0;
}