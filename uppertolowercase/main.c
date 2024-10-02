#include <stdio.h>

#define _5TH_BIT_MASK 1<<5

void lower(char[]);
void lower1(char[]);

int main() {
    char name[20] = "JACOB abraham";

    printf("Original: %s\n", name);
    lower1(name);
    printf("Converted to lower case: %s\n", name);

    return 0;
}

void lower(char name[]) {

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] = name[i] + ('a' - 'A');
        }
    }
}

void lower1(char name[]) {
    for(int i = 0 ; name[i] != '\0'; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] ^= _5TH_BIT_MASK; // flip the 5th bit
        }
    }
}
