#include <stdio.h>

int strlen(const char[]);

int main() {
    char string[20] = "Jacob Abraham";
    printf("Length: %d\n", strlen(string));
    return 0;
}

int strlen(const char string[]) {
    int i = 0;
    while (string[++i] != '\0');
    return i;
}

