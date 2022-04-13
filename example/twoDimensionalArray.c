#include <stdio.h>

int main() {

    int multiDimArray[4][3] = { {1,2,4}, {4,3,2}, {4,2,2}, {4,3,3} };

    int counterForArrayOne;
    int counterForArrayTwo;

    //traversing all array

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++ ){
            printf("Multi Dim Array [%d][%d] = %d \n", counterForArrayOne, counterForArrayTwo, multiDimArray[counterForArrayOne][counterForArrayTwo]);
        }
    }
    return 0;
}