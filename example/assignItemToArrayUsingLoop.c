#include <stdio.h>

int main() {

    int values[5];

    printf("Enter 5 integers: \n");
    int counter;

    for(counter = 0; counter < 5; counter++){
        scanf("%d", &values[counter]);
    }

    printf("Displaying integers: \n");

    for(counter = 0; counter < 5; counter++){
        printf("%d \n", values[counter]);
    }

    return 0;
}