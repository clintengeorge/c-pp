#include <stdio.h>
#include<conio.h>
int main(void) 
{
	float n;
	int a;
  clrscr();
	scanf("%f",&n);
	if(n<0)
	{
	    a=(int)(n-0.5);
	}
	else
	{
	    a=(int)(n+0.5);
	}
	printf("%d",a);
	return 0;
}
