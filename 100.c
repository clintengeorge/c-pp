#include<stdio.h>
#include<conio.h>
void main()
{
    int n,res=1,rem=0;
    clrscr();
    scanf("%d",&n);
    while(n!='\0')
    {
        rem=n%10;
        res=res*rem;
        n=n/10;
    }
    printf("%d",res);
}
