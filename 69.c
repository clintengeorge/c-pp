#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	int a,b,diff;
	clrscr();
	scanf("%d %d",&a,&b);
	diff=a-b;
	if(diff%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
