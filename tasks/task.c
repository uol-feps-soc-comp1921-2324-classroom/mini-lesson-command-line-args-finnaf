#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int invalid_usage(char *executable){
    printf("Usage: %s <int1> <int2>\n", executable);
    return 1;
}

int main(int argc, char *argv[]) {
    int num1, num2;
    char chk1[20], chk2[20];

    if (argc != 3)
    {
        return invalid_usage(argv[0]);
    }

    // convert both args to int
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    sprintf(chk1, "%d", num1);
    sprintf(chk2, "%d", num2);

    if (strcmp(argv[1], chk1) != 0 || strcmp(argv[2], chk2) != 0){
        return invalid_usage(argv[0]);
    }

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}
