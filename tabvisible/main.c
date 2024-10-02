#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\t');
            continue;
        }
        putchar(c);
    }

    return 0;
}
