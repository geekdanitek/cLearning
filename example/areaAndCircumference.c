#include <stdio.h>

int main(){


    double radius;
    const double Pi = 3.142;

    printf("Enter your radius: ");
    scanf("%lf", &radius);

    double areaOfCircle = Pi * radius * radius;

    double circumference = 2 * Pi * radius;

    printf("The area of this circle is: %lf \n", areaOfCircle);
    printf("The circumference of this circle is: %lf \n", circumference);
    printf("%d", 7%4);



    return 0;
}