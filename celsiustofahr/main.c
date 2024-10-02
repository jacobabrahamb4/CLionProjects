#include <stdio.h>

int main() {
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        printf("%d \t %0.1f \n", fahr, 5.0 * (fahr - 32.0) / 9.0);
    }
    return 0;
}
