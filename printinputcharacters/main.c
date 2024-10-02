#include <stdio.h>

int main() {

    long nc;
    int c;
    nc = 0;
    while ((c = getchar()) != EOF) {
        printf("char: %c\n", c);
        ++nc;
    }
    printf("Number of characters: %ld\n", nc);

    return 0;
}
