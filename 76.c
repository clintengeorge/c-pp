#include<stdio.h>
#include<conio.h>
int main() 
{
    int n,i,count=0;
    clrscr();
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("no..it is not composite");
    }
    else
    {
        printf("yes..it is composite");
    }
	return 0;
}