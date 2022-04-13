#include <stdio.h>

double areaOfSquare(double side);
double circumferenceOfCircle(double radius);

int main(){


    int choosenFormula;
    double formulaResult;
    double squareSize;
    double circleRadius;


    printf("Enter the formula you want to use \n");
    printf("1 is for Area of Square\n");
    printf("2 is for  Circumference of Circle\n");

    scanf("%d", &choosenFormula);


    switch (choosenFormula)
    {
        case 1:
            printf("Enter the size of the square: ");
            scanf("%lf", &squareSize);

            formulaResult = areaOfSquare(squareSize);
            printf("The area of a square is %.2lf \n", formulaResult);

        break;
        
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &circleRadius);

            formulaResult = circumferenceOfCircle(circleRadius);
            printf("The circumference of a cirlce is %.2lf \n", formulaResult);

        break;
        
        default:
            printf("Your option does not match the current use-case \n");
        break;
    }


    return 0;
}


double areaOfSquare(double side) {
    return side * side;
}

double circumferenceOfCircle(double radius) {
    const double pi = 3.142;

    return 2 * pi * radius;
}