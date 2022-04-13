#include <stdio.h>

int main() {

    int multiDimArray[4][3];

    int counterForArrayOne;
    int counterForArrayTwo;


    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        printf("Enter row %d values \n", counterForArrayOne);

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++ ){
            scanf("%d", &multiDimArray[counterForArrayOne][counterForArrayTwo]);

        }
    }


    //traversing all array

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        printf("\n");

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++ ){
            printf("Multi Dim Array [%d][%d] = %d \t", counterForArrayOne, counterForArrayTwo, multiDimArray[counterForArrayOne][counterForArrayTwo]);
        }
    }
    return 0;
}