#include <stdio.h>

int main(){
    int number;

    int count = 10;
    
    while(count > 0){
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

        count--;
        printf("Current count is: %d \n", count);
    }

   return 0;
}