#include <stdio.h>

int power (int base, int n);
int power1 (int base, int n);
int main() {

    for (int i = 0; i < 10; ++i) {
        printf("%d -> %d , %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power (int base, int n) {
    int power = 1;
    for (int i = 0; i < n; ++i) {
        power *= base;
    }
    return power;
}

int power1(int base, int n) {
    int power;
    for(power = 1; n > 0; n--) { // called by value, n is treated a local variable
        power *= base;
    }
    return power;
}
