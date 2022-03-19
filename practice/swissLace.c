#include <stdio.h>

int main(){

    int gradeOfCloth;

    printf("Enter cloth grade: ");
    scanf("%d", &gradeOfCloth);

    switch (gradeOfCloth)
    {
        case 1:
            printf("The price for grade one is ₦100,000.00 \n");
        break;

        case 2:
            printf("The price for grade two is 250,000.00 \n");
        break;

        case 3:
            printf("The price for grade three is 380,000.00 \n");
        break;

        case 4:
            printf("The price for grade four is 500,000.00 \n");
        break;

        case 5:
            printf("The price for grade five is 620,000.00 \n");
        break;

        default:
            printf("No available price for your specified grade \n");
        break;
    }
    return 0;
}