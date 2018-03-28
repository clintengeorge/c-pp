#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	  char a[100];
    int n,i;
    clrscr();
    scanf("%[^\t\n]s",a);
    n=strlen(a);
    a[0]=a[0]-32;
    for(i=0;i<n;i++)
    {
      if(a[i]==' ')
      {
          a[i+1]=a[i+1]-32;
      }
    }
    printf("%s",a);
	
	return 0;
}
