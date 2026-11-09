#include <stdio.h>

int main() {
    int numberinput;
    int negativeNumbers = 0;
    int positiveNumbers = 0;
    int zeros = 0;
    for (int z = 1; z <= 5; z++){
        printf("Enter number %d: ", z);
        scanf("%d", &numberinput);
        if (numberinput < 0){
            negativeNumbers++;
        }
        else if (numberinput > 0){
            positiveNumbers++;
        }
        else{
            zeros++;    
        }
    }
    printf("RESULTS:\n");
    printf("Negative numbers: %d\n", negativeNumbers);
    printf("Positive numbers: %d\n", positiveNumbers);
    printf("Zeros: %d\n", zeros);
}