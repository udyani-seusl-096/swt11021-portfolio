#include <stdio.h>

int main() {

    int option;
    float balance=25000.00;
    float amount;

    printf("\n");
    printf("\n");

    printf("---------SEUSL ATM-----------\n");

    printf("\n");
    printf("\n");

    printf("MENU\n");

    printf("\n");
    printf("\n");

    printf("1.CHECK THE BALANCE-->\n");
    printf("2.DEPOSIT-->\n");
    printf("3.WITHDRAW-->\n");
    printf("4.EXIT-->\n");

    printf("\n");
    printf("\n");

    printf("SELECT THE ONE OPTION:");
    scanf("%d",&option);
    printf("\n");
    printf("\n");

    switch (option) {

        case 1:
        printf(" YOUR ACCOUNT BALANCE:%.2F LKR \n",balance);
        break;

        case 2:
        printf("ENTER AMOUNT TO DIPOSIT:");
        scanf("%f", &amount);
        printf("\n");
        printf("\n");

        balance = balance + amount;
        printf("\n");
        printf("DIPOSIT SUCCESSFUL!\n");
        printf("YOUR NEW ACCOUNT BALANCE IS : %.2F LKR\n",balance);
        printf("THANK YOU!");
        printf("\n");
        printf("\n");
        break;

        case 3:
        printf("\n");
        printf("ENTER AMOUNT TO WITHDRAW:");
        scanf("%f",&amount);
        printf("\n");
        printf("\n");

        if (amount <= balance) 
           {
            balance = balance - amount;
            printf("WITHDRAWAL SUCCESSFUL!\n");
             printf("YOUR NEW ACCOUNT BALANCE IS : %.2F LKR\n", balance );
           }
        else 
           {
            printf("INSFFICIENT FUNDS \n");
           }
        break;

        case 4 :
        printf("GOOD BYE AND EXIT\n");
        return 0;

        default:
         printf("INVALID OPTION\n");
         printf("\n");
    }

    

return 0;
}