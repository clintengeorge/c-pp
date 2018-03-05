#include<stdio.h>
#include<conio.h>
void main(void)
{
	int n,i,a,b,c;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	getch();
}
