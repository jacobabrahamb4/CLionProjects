#include <stdio.h>

#define MAXLINE 100 // maximum input line length

int getline(char line[], int maxline);
void copy(char from[], char to[]);

int main() {
    int max = 0;
    int length;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((length = getline(line, MAXLINE)) > 0) { // read each line
        if (length > max) {
            max = length;
            copy(line, longest);
        }
    }

    if (max > 0) {
        printf("%s", longest); // print the longest
    }

    return 0;
}

// read a line into line, return length
int getline(char line[], int maxline) {

    int c, i;

    for (i = 0; /*i < maxline - 1 &&*/ (c = getchar()) != /*EOF && c !=*/ '\n'; i++) {
        line[i] = c;
    }

    /*if (c == '\n') {
        line[i] = c;
        i++;
    }*/

    line[i] = '\0';

    return i;
}

// copy from to to
void copy(char from[], char to[]) {
    int i;

    while ((to[i] = from[i]) != '/0') {
        i++;
    }
}
