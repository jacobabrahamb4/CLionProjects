#include <stdio.h>

void upper(char[]);
void upper1(char[]);

int main() {
    char name[20] = "Jacob Abraham";

    printf("Original: %s\n", name);
    upper1(name);
    printf("Converted to upper: %s\n", name);

    return 0;
}

void upper(char name[]) {
    for (int i = 0; name[i] != '\0'; ++i) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] ^= (1 << 5);
        }
    }
}

void upper1(char name[]) {
    for (int i = 0; name[i] != '\0'; ++i) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] -= ('a' - 'A');
        }
    }
}