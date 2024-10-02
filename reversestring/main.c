#include <stdio.h>

#define MAX 100

int main() {

    int c, i, k = 0;
    char line[MAX];
    char reverse[MAX];

    for (i = 0; (c = getchar()) != '\n'; i++) {
        line[i] = c;
    }
    line[i] = '\0';

    printf("Straight: %s\n", line);

    for(int j = i - 1; j >= 0; j--) {
        reverse[k++] = line[j];
    }
    reverse[k] = '/0';

    printf("Reverse: %s\n", reverse);

    return 0;
}
