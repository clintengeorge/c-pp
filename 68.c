#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    clrscr();
    printf("enter the number");
    scanf("%d",&number);
    if(number%7==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }return 0;
}
