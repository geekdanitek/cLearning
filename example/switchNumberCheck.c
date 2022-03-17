#include <stdio.h>

int main(){

    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    switch (num)
    {
        case  10:
            printf("number is equal to 10 \n");
            break;
        
        case  50:
            printf("number is equal to 50 \n");
            break;

        case 100:
            printf("number is equal to 100 \n");
            break;

        default:
            printf("number is not equal to the give values \n");
            break;
    }
}