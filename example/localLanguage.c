#include <stdio.h>

int main(){


    int num;

    printf("Enter num");
    scanf("%d", &num);

    if(num == 1){
        printf("Kaba \n");
    } else if (num == 2){
        printf("Ndewo \n");
    }  else if (num == 3){
        printf("Bunke de Zuwa \n");
    } else {
        printf("No greeating for this input \n");
    }

    
    return 0;
}