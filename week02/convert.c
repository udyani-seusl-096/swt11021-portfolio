#include <stdio.h>

int main(void)
{
    printf("\n");
    printf("\n");
    printf("=== Distance and Temperature Converter ===\n\n");

    printf("\n");
    
    //convert the distant 
    double kilometers , miles , meters , centimeters;

    printf("Enter the distance in kilometers : ");
    scanf("%lf" , &kilometers);


    printf("\n");
    miles = kilometers * 0.621371;
    meters = kilometers * 1000.0;
    centimeters = kilometers * 100000.0;

    
    printf("miles      =  %.2f\n",miles);
    printf("meters     =  %.2f\n",meters);
    printf("centimeters=  %.2f\n",centimeters);


    printf("--------------------------------------------\n");

    //convert the c
    double celsius , fahrenheit , kelvin;

    printf("Enter the temperature in celsius: ");
    scanf("%lf" , &celsius);

    printf("\n");
    
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    
    printf("fahrenheit = %.2f\n", fahrenheit);
    printf("kelvin     = %.2f\n",kelvin);

    return 0 ; 



}