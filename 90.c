#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{	
   char a[10];
   int n,b,i;
   clrscr();
   scanf("%s",a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       if(a[i]>='0'&&a[i]<='9')
       {
           printf("%c",a[i]);
       }
   }
	return 0;
}
