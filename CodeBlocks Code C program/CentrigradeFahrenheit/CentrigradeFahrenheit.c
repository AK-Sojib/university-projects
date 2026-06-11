/*Write a program that convert Centigrade temperature
 to Fahrenheit temperature.
*/
#include<stdio.h>
int main()
{
    float c,F;
    printf("Enter the Centigrade temperature = ");
    scanf("%f",&c);
    F = (1.8*c) + 32;
    printf("Fahrenheit temperature is = %.2f",F);
    return 0;
}
