#include <stdio.h>

int main() {

    int studentCAScores[4][3];
    int studentExamScores[4][3];
    int total[4][3];

    int counterForArrayOne;
    int counterForArrayTwo;

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        printf("Enter CA Scores for Student  %d: \n", counterForArrayOne + 1);

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++) {
            scanf("%d", &studentCAScores[counterForArrayOne][counterForArrayTwo]);
        }
    }

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        printf("Enter Exam Scores for Student  %d: \n", counterForArrayOne + 1);

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++) {
            scanf("%d", &studentExamScores[counterForArrayOne][counterForArrayTwo]);
        }
    }


    //calculate total grade

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){

        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++) {
            total[counterForArrayOne][counterForArrayTwo] = studentCAScores[counterForArrayOne][counterForArrayTwo] + studentExamScores[counterForArrayOne][counterForArrayTwo];
        }
    }



    printf("Displaying total scores: \n");

    for(counterForArrayOne = 0; counterForArrayOne < 4; counterForArrayOne++){
        printf("Total is for student %d \n", counterForArrayOne + 1);
        for(counterForArrayTwo = 0; counterForArrayTwo < 3; counterForArrayTwo++) {
            printf("Total grade for subject is %d \n", total[counterForArrayOne][counterForArrayTwo]);
        }
    }

    return 0;
}