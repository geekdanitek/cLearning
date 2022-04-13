#include <stdio.h>

int main(){

    int ages[4];
    int counter;
    int largestValue;

    printf("Enter thhe age of 4 students: \n");

    for(counter = 0; counter < 4; counter++){
        scanf("%d", &ages[counter]);
    }

    //assume thhe first is the largest value

    largestValue = ages[0];

    for(counter = 0; counter < 4; counter++){
        if(largestValue < ages[counter]){
            largestValue = ages[counter];
        }
    }

    printf("Largest age in the group is %d \n", largestValue);


    return 0;
}