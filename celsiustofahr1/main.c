#include <stdio.h>

int main() {
    float lower = 0, upper = 300, step = 20;
    float fahr, celsius;

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f \t %.1f \n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
