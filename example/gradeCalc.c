#include <stdio.h>

int main() {

    int ca[7];
    int exam[7];
    int total[7];



    printf("Enter CA scores 7 subjects: \n");
    int counter;

    for(counter = 0; counter < 7; counter++){
        scanf("%d", &ca[counter]);
    }

    printf("Enter Exam scores 7 subjects: \n");

    for(counter = 0; counter < 7; counter++){
        scanf("%d", &exam[counter]);
    }

    //calculate total grade

    for(counter = 0; counter < 7; counter++){
        total[counter] = ca[counter] + exam[counter];
    }



    printf("Displaying total and average scores: \n");

    for(counter = 0; counter < 7; counter++){
        printf("Subject %d total grade is %d  and the average is %lf \n", counter + 1, total[counter], (double) total[counter] / 7);
    }

    return 0;
}