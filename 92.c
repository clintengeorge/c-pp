#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[n],i,sum=0;
  clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a);
	    sum=sum+a;
	}
	printf("%d",sum);
	return 0;
}
