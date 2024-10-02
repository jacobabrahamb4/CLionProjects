#include <stdio.h>

#define BUFFER 100

int main() {
    int histogram[BUFFER];
    int c;

    for (int i = 0; i < BUFFER; ++i) {
        histogram[i] = 0;
    }

    while (c = getchar()) {
        if (c == ' ' || c == 't' || c == '\n' || c == EOF) {

        }
    }

    return 0;
}
