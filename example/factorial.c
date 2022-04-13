#include <stdio.h>

int factorial(int num);
// int square(int num);

int main(){

    int userInput;

    printf("Enter a number: ");
    scanf("%d", &userInput);

    printf("Factorial of %d is %d \n", userInput, factorial(userInput));
}


int factorial(int num) {

    int fac = 1;
    int i = 1;

    while (i <= num)
    {
        fac = fac * i;
        // printf("%d * %d = %d \n", num, i, fac);
        i++;
    }

    return fac;
    
}