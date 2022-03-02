#include <stdio.h>

int main(){


    double principal;
    double rate;
    double time;



    printf("Enter your Principal: ");
    scanf("%lf", &principal);

    printf("Enter your rate: ");
    scanf("%lf", &rate);

    printf("Enter your time: ");
    scanf("%lf", &time);

    double simpleInterest = (principal * rate * time) / 100;

    printf("The simple interest is: %lf \n", simpleInterest);



    return 0;
}