#include <stdio.h>

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(){
    int num1;
    int num2;

    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);

    int addition = add(num1, num2);
    int substraction = sub(num1, num2);
    int multiplication = mul(num1, num2);
    int division = div(num1, num2);

    printf("Addition of %d + %d = %d \n", num1, num2, addition);
    printf("Substraction of %d - %d = %d \n", num1, num2, substraction);
    printf("Multiplication of %d * %d = %d \n", num1, num2, multiplication);
    printf("Division of %d / %d = %d \n", num1, num2, division);

     return  0;
}


int add(int num1, int num2) {
    return num1 + num2;
}
int sub(int num1, int num2) {
    return num1 - num2;
}
int mul(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}