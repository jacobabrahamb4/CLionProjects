#include <stdio.h>

int main() {

    int c, s = 0, t = 0, n = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                s++;
                break;
            case '\t':
                t++;
                break;
            case '\n':
                n++;
                break;
            default:
                break;

        }
    }
    printf("%d , %d , %d \n", s, t, n);
    return 0;
}
