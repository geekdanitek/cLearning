#include <stdio.h>

int main() {
   /* my first program in C */
   // printf("Hello, Worlddd! \n");

   int num1;
   int num2;

   printf("Enter your first number: ");
   scanf("%d", &num1);

   //scanf is the format specifier and the variable name;

   printf("Enter your second number: ");
   scanf("%d", &num2);


   int addition = num1 + num2;
   int substraction = num1 - num2;
   double divi = num1 / num2;
   int multiply = num1 * num2;
   int modu = num1 % num2;

   printf("%d addition \n", addition);
   printf("%d substraction \n", substraction);
   printf("%lf division \n", divi);
   printf("%d multiply \n", multiply);
   printf("%d modulus \n", modu);
   
   return 0;
}