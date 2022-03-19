#include <stdio.h>

int main(){


    int number = 0;

    int userInputNumber;
    int product;


    int x =1;
    x = x + 2;
    x = x * 2;

    printf("%d \n", x);

    return 0;

    printf("Enter a number to be multiplied: ");
    scanf("%d", &userInputNumber);

    while(number <= 50){
        // if(number % 2 == 0){
            // printf("Current even number is %d \n", number);
        // }
        // number = 2 * number;
        // printf("Current number is %d \n", number);
        // number++;;

        
        product = number * userInputNumber;
        printf("%d x %d = %d \n", userInputNumber, number, product);
        number++;
    }


    return 0;
}