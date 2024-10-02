#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {

    int c, newline, newword, nchars, state;

    state = OUT;
    newline = newword = nchars = 0;
    while ((c = getchar()) != EOF) {
        nchars++;
        if(c == '\n') {
            newline++;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            newword++;
        }
    }
    printf("%d \t %d \t %d\n", nchars, newword, newline);

    return 0;
}
