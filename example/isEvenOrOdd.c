#include <stdio.h>

char* isEvenOrOdd(int number);


int main(){

    int number;

    printf("Enter number: ");
    scanf("%d", &number);


    char* numberType = isEvenOrOdd(number);

    printf("%s \n", numberType);

    return 0;
}

 
char* isEvenOrOdd(int number){
    if(number % 2 == 0){
        return "Number is even";
    } else {
        return "Number is odd";
    }
}