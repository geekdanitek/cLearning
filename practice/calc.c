#include <stdio.h>

int main(){

    double numOne;
    double numTwo;
    char operationToBePerformed;

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf("%c", &operationToBePerformed);

    printf("Enter number one: ");
    scanf("%lf", &numOne);

    printf("Enter number two: ");
    scanf("%lf", &numTwo);
   
    switch (operationToBePerformed)
    {
        //we round it up to 2 decimal places to as to prevent hhaving long zeros (000000)
        case '+':
            printf("Additon of %.2lf + %.2lf = %.2lf \n", numOne, numTwo, numOne + numTwo);
        break;

        case '-':
            printf("Substraction of %.2lf + %.2lf = %.2lf \n", numOne, numTwo, numOne - numTwo);

        break;

        case '*':
            printf("Multiplication of %.2lf + %.2lf = %.2lf \n", numOne, numTwo, numOne * numTwo);
        break;

        case '/':
            printf("Division of %.2lf + %.2lf = %.2lf \n", numOne, numTwo, numOne / numTwo);
        break;
        
        default:
            printf("Specified operation not available \n");
        break;
    }

    return 0;
}