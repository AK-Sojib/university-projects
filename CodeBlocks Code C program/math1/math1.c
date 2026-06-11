#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter the value of x = ");
    scanf("%lf",&x);

    double result1 = log(x);
    printf("log(%lf) = %.2lf\n",x,result1);

    /*double result2 = log10(x);
    printf("log10(%lf) = %.2lf\n",x,result2);

    double result3 =  exp(x);
    printf("exp(%lf) = %.2lf\n",x,result3);

    double result4 = sin(x);
    printf("sin(%lf) = %.2lf\n",x,result4);

    double result5 = cos(x);
    printf("cos(%lf) = %.2lf\n",x,result5);

    double result6 = tan(x);
    printf("tan(%.lf) = %.2lf",x,result6);
*/
    return 0;
}
