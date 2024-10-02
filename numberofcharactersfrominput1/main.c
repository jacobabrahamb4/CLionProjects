#include <stdio.h>

int main() {

    double nc;

    for (int nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);

    return 0;
}
