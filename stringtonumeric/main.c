#include <stdio.h>

int atoi(char[]);

int main() {

    char string[10] = "12345";

    printf("original: %s -> numeric: %d\n", string, atoi(string));

    return 0;
}

int atoi(char string[]) {
    int n = 0;

    for(int i = 0; string[i] >= '0' && string[i] <= '9'; i++) {
        n = n * 10 + (string[i] - '0');
    }
    return n;
}