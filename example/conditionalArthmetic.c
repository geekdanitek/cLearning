#include <stdio.h>

int main(){

    int numOne;
    int numTwo;
    int addition;
    int substraction;
    int multiply;
    int numberLimit = 100;

    printf("Enter number one: ");
    scanf("%d", &numOne);


    printf("Enter number two: ");
    scanf("%d", &numTwo);


    if( numOne < numberLimit && numTwo < numberLimit){

        if(numOne > numTwo){

            addition = numOne + numTwo;
            printf("Since number one is greater than number two, the addtion is: %d \n", addition);

        } else if (numOne < numTwo){
            substraction = numOne - numTwo;
            printf("Since number one is not greater than number two, the substraction is: %d \n", substraction);
        } else {
            multiply = numOne * numTwo;
            printf("Since number one is equals to number two, the multiplication is: %d \n", multiply);

        }
    } else {
        printf("Number one and two is greater than 100 \n");
    }

    return 0;
}