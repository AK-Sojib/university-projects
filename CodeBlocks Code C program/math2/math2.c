#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);
    double result = round(x);
    printf("round(%lf) = %.2lf\n",x,result);
    double result2 = trunc(x);
    printf("trunc(%lf) = %.2lf\n",x,result2);
    double result3 = ceil(x);
    printf("ceil(%lf) = %.2lf\n",x,result3);
    double result4 = floor(x);
    printf("floor(%lf) = %.2lf",x,result4);

    return 0;

}
