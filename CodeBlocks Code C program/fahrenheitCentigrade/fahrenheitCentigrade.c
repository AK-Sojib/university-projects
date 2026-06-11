/*Write a program that convert Fahrenheit temperature
 to Centigrade temperature.
*/
#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Fahrenheit temperature = ");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf("Centigrade temperature is = %.2f",C);
    return 0;
}
