
#include <stdio.h>

int integer;
int int1, int2;
int x, y;

void calculate() {
    printf("Enter a two digit number: ");
    scanf("%d", &integer);

    int1 = integer / 10;
    int2 = integer % 10;

    x = int1 * 3;
    y = int2 * 2;

    if (x == 0 || y == 0) {
        printf("Cannot calculate because one of the digits is zero.\n");
    }
    else if (x % y == 0) {
        printf("The first number tripled is a multiple of the second number doubled.\n");
    }
    else {
        printf("The first number tripled is not a multiple of the second number doubled.\n");
    }
}

int main() {
    calculate();

    return 0;
}
