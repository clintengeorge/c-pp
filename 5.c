#include <stdio.h>
void main()
{
    double a1, b2, c3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &a1, &b2, &c3);

    if( a1>=b2 && a1>=c3 )
        printf("%.2f is the largest number.", a1);

    if( b2>=a1 && n2>=c3 )
        printf("%.2f is the largest number.", b2);

    if( c3>=a1 && c3>=b2 )
        printf("%.2f is the largest number.", c3);

    getch();
}
