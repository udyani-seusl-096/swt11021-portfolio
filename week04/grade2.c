#include <stdio.h>

int main() {
    int score;
    char grade;
    
    printf("Enter score 0-100: ");
    scanf("%d", &score);
    
    
    if (score < 0 || score > 100) {
        printf("Invalid score! \n");
        return 0;
    }
    
    
    switch (score / 10) {
        case 10:  // 100 
        case 9:   // 90-99 
            grade = 'A';
            printf("Grade: %c\nMessage: Excellent\n", grade);
            break;
            
        case 8:   // 80-89 
            grade = 'B';
            printf("Grade: %c\nMessage: Very Good\n", grade);
            break;
            
        case 7:   // 70-79 
        case 6:   // 60-69 
            grade = 'C';
            printf("Grade: %c\nMessage: Good\n", grade);
            break;
            
        case 5:   // 50-59 
            grade = 'D';
            printf("Grade: %c\nMessage: Pass\n", grade);
            break;
            
        default:  // 0-49 ට - case 4,3,2,1,0 
            grade = 'F';
            printf("Grade: %c\nMessage: Fail\n", grade);
            break;
    }
    
    return 0;
}