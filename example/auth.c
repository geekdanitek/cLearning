#include <stdio.h>
#include <string.h>

int main(){

    char correctPassword[20] = "Hello12345"; 
    char password[20];

    int tries = 0;
    int isTheSame;

    while (tries < 3)
    {
        printf("Enter your password: ");
        scanf("%s", password);
        
        isTheSame = strcmp(correctPassword, password);


        if(isTheSame == 0){
            printf("Password is correct, give access \n");
            break;

        } else {
            tries++;
            printf("Password incorrect, try again \n");
        }

        if(tries == 3) {
            printf("Try again in 3 days time \n");
        }
    }
    

    return  0;
}