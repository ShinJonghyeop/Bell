#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char subject[51];
    float score;
    char grade[3];
    float total_score = 0; // 학점 총합
    float total_grade = 0; // 학점 * 과목평점

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", subject, &score, grade); 

        float sub_grade = 0;

        
        if (strcmp(grade, "A+") == 0)
            sub_grade = 4.5;
        else if (strcmp(grade, "A0") == 0)
            sub_grade = 4.0;
        else if (strcmp(grade, "B+") == 0)
            sub_grade = 3.5;
        else if (strcmp(grade, "B0") == 0)
            sub_grade = 3.0;
        else if (strcmp(grade, "C+") == 0)
            sub_grade = 2.5;
        else if (strcmp(grade, "C0") == 0)
            sub_grade = 2.0;
        else if (strcmp(grade, "D+") == 0)
            sub_grade = 1.5;
        else if (strcmp(grade, "D0") == 0)
            sub_grade = 1.0;
        else if (strcmp(grade, "P") == 0) {
            score = 0;
            sub_grade = 0;
        }
        else if (strcmp(grade, "F") == 0)
            sub_grade = 0.0;

        
        total_score += score;
        total_grade += (score * sub_grade);
    }

    
    if (total_score > 0) {
        printf("%f\n", (total_grade / total_score));
    }
    else {
        printf("0.0\n"); 
    }

    return 0;
}
