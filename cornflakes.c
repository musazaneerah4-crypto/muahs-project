#include <stdio.h>

int main() {
    int D;
    float C = 50, H = 30, Q, x;

    printf("Enter D: ");
    scanf("%d", &D);

    Q = (2 * C * D) / H;

    x = 1;

    while (x * x <= Q) {
        x = x + 0.01;
    }

    printf("Answer = %.0f", x);

    return 0;
}