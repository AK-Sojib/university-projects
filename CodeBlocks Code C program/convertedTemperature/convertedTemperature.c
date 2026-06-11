#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter the Celsius temperature = ");
        scanf("%f",&temp);
        convertedTemp = (1.8*temp)+32;
        printf("The Fahrenheit temperature is = %f\n",convertedTemp);
        break;
    }

    case 2:
    {
        printf("Enter the Fahrenheit temperature = ");
        scanf("%f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("The Celsius temperature is = %f\n",convertedTemp);
        break;
    }
    default:
        printf("Not a correct option\n");
    }
    return 0;
}
