#include <stdio.h>
#include<conio.h>
void main()
{
    int low, high, a, flag;
    clrscr();
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
    flag = 0;
    for(a = 3; a <= low/3; ++a)
    {
    if(low % a == 0)
    {
    flag = 2;
    break;
    }
    }
    if (flag == 0)
    printf("%d ", low);
    ++low;
    }

    getch();
}
