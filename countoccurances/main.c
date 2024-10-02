#include <stdio.h>

// count digits, white spaces, others.

int main() {
    int c, nwhite, nothers;
    int ndigit[10];

    for (int i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        // count the number of digits
        if (c >= '0' && c <= '9') {
            ndigit[c - '0']++;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            nwhite++;
        } else {
            nothers++;
        }
    }

    printf("Digits: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d -> %d \n", i, ndigit[i]);
    }
    printf("\n");
    printf("Number of white spaces: %d\n", nwhite);
    printf("Number of other characters: %d\n", nothers);

    return 0;
}
