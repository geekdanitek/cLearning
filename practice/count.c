#include <stdio.h>


int main(){

    int result = 0;
    int num;

    for(num = 0; num <= 10; num += 2) {        
        result = result + num;
    }
    printf("Result is %d \n", result);
    return 0;
}