#include <stdio.h>

#define ALPHABETS 26
#define DIGITS 10

int main() {

    int c;
    int alphabets_capital[ALPHABETS] = {0};
    int alphabets_small[ALPHABETS] = {0};
    int digits[DIGITS] = {0};
    int spaces = 0, tabs = 0;

    while ((c = getchar()) != '\n') { // workaround instaed of EOF
        if (c >= 'A' && c <= 'Z') {
            alphabets_capital[c - 'A']++;
        } else if (c >= 'a' && c <= 'z') {
            alphabets_small[c - 'a']++;
        } else if (c >= '0' && c <= '9') {
            digits[c-'0']++;
        } else if ( c == ' ') spaces++;
        else if (c == '\t') tabs++;
    }

    for (int i = 0; i < ALPHABETS; ++i) {
        printf("%c -> %d\n", ('A' + i), alphabets_capital[i]);
    }

    for (int i = 0; i < ALPHABETS; ++i) {
        printf("%c -> %d\n", ('a' + i), alphabets_small[i]);
    }

    for (int i = 0; i < DIGITS; ++i) {
        printf("%c -> %d\n", ('0' + i), digits[i]);
    }
    printf("Spaces: -> %d\n", spaces);
    printf("Tabs: -> %d\n", tabs);

    return 0;
}
