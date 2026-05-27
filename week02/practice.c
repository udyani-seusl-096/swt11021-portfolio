#include <stdio.h>

int main(void) {
    int num = 586;
    float pi = 3.141593;
    char ch = 'A';
    int precent = 33 ;

    printf("Integer (decimal)   : %d\n", num);
    printf("Integer (hex)       : %x\n", num);
    printf("Integer (octal)     : %o\n", num);
    printf("Float (default)     : %f\n", pi);
    printf("Float (2 dp)        : %.2f\n", pi);
    printf("Float (scientific)  : %e\n", pi);
    printf("Character           : %c\n", ch);
    printf("percetage           ; %d%%\n", precent);
        return 0;
}