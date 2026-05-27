#include <stdio.h>

int main()

{
   
   
    char initial[20];
    int reg;
    double GPA;
    int year;

   
    printf("Enter initial  : ");
    scanf("%s", initial);

    printf("Enter reg. no. : ");
    scanf("%d", &reg);

    printf("Enter  GPA     : ");
    scanf("%lf", &GPA);

    printf("Enter year     : ");
    scanf(" %d", &year);

    //printe the enterd deatails
    printf("--------------------------------------------\n");
    printf("Initial : %s\n", initial);
    printf("Reg. No.: %d\n", reg);
    printf("GPA     : %.2f\n", GPA);
    printf("Year    : %d\n", year);

    return 0;
}