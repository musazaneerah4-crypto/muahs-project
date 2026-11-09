
#include <stdio.h>

int int1, int2, int3;
int number;
int sum, multiplication, smallest, largest;
float average;

void calculate() {
    printf("Enter a three digit number: ");
    scanf("%d", &number);

    int1 = number / 100;
    int2 = (number / 10) % 10;
    int3 = number % 10;

    sum = int1 + int2 + int3;

    multiplication = int1 * int2 * int3;

    average = (int1 + int2 + int3) / 3.0;

    printf("The sum of the numbers is: %d\n", sum);
    printf("Multiplying the numbers results in: %d\n", multiplication);
    printf("The average of the following numbers is: %.2f\n", average);

    largest = int1;

    if (int2 > largest) {
        largest = int2;
    }

    if (int3 > largest) {
        largest = int3;
    }

    smallest = int1;

    if (int2 < smallest) {
        smallest = int2;
    }

    if (int3 < smallest) {
        smallest = int3;
    }

    printf("The smallest number is: %d\n", smallest);
    printf("The largest number is: %d\n", largest);
}

int main() {
    calculate();

    return 0;
}
