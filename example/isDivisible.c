#include <stdio.h>

int main(){
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if(number % 7 == 0){
        printf("It is a multiple of 7 \n");

    } else if (number % 5 == 0){
        printf("It is a multiple of 5 \n");
    } else if (number % 3 == 0){
        printf("It is a multiple of 3 \n");
    } else if (number % 2 == 0){
        printf("It is a multiple of 2 \n");
    } else {
        printf("No multiples available \n");
    }

   return 0;
}