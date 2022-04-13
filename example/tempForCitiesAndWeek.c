#include <stdio.h>

int main() {

    float tempForCity[2][7];

    int counterForArrayOne;
    int counterForArrayTwo;


    for(counterForArrayOne = 0; counterForArrayOne < 2; counterForArrayOne++){
        printf("Enter city %d tempeature \n", counterForArrayOne + 1);

        for(counterForArrayTwo = 0; counterForArrayTwo < 7; counterForArrayTwo++ ){
            scanf("%f", &tempForCity[counterForArrayOne][counterForArrayTwo]);

        }
    }


    //traversing all array

    for(counterForArrayOne = 0; counterForArrayOne < 2; counterForArrayOne++){
        printf("City %d \n", counterForArrayOne + 1);


        for(counterForArrayTwo = 0; counterForArrayTwo < 7; counterForArrayTwo++ ){
            printf("Temperature for day %d = %.2f \n", counterForArrayTwo + 1, tempForCity[counterForArrayOne][counterForArrayTwo]);
        }
    }
    return 0;
}