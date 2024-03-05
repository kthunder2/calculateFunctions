#include<stdio.h>
#include<math.h>

int main()
{
    float x;
    float y;
    float f;

    printf("Enter x:");
    scanf("%f", &x);

    y = (x * 2);

    f = ((2*cos(pow(y,2)*sqrt(2*x)))+(((4*x)+3)/((3*pow(x,2))+(2*y)+4))+sin(y));

    printf("x: %.2f", x);

    printf("\ny: %.2f", y);

    printf("\nf: %.2f", f);

    return 0;
}
