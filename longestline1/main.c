#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

int main() {
    int length;
    extern int max;

    while ((length = getline())) {
        if (length > max) {
            max = length;
            copy();
        }
    }
    if(max > 0) {
        printf("Max length line: %s", longest);
    }

    return 0;
}

int getline(void) {
    int c, i = 0;

    extern char line[];

    while ((c = getchar()) != '\n' && i < MAXLINE - 1) {
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}

void copy(void) {
    int i = 0;

    extern char line[], longest[];

    while ((longest[i++] = line[i]) != '/0');

}
