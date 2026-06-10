#include <stdio.h>
 int main (void)
 {  
    printf("\n");
    printf("\n");
    printf("-------------------------------------\n");
    


    int score;
    char grade;


    printf("ENTER SCORE 0-100:");
    scanf("%d" , &score);

    if (score<0 || score>100)
    {printf("invalid score!\n");}

   else if (score >= 90) 
   {
        grade = 'A';
        printf("Grade: %c\nMessage: Excellent\n", grade);
    }

    else if (score >= 75) {
        grade = 'B';
        printf("Grade: %c\nMessage: Very Good\n", grade);
    }
    else if (score >= 60) {
        grade = 'C';
        printf("Grade: %c\nMessage: Good\n", grade);
    }
    else if (score >= 50) {
        grade = 'D';
        printf("Grade: %c\nMessage: Pass\n", grade);
    }
    else {
        grade = 'F';
        printf("Grade: %c\nMessage: Fail\n", grade);
    } 

    return 0;

 }