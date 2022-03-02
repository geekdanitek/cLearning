#include <stdio.h>

int main(){


    int numOne;
    int numTwo;

    printf("Enter your first number: \n");
    scanf("%d", &numOne);

    printf("Enter your second number: \n");
    scanf("%d", &numTwo);

    double quotient = numOne / numTwo;
    int reminder = numOne % numTwo;

    printf("The quotient is: %lf \n", quotient);
    printf("The reminder is: %d \n", reminder);

    return 0;
}