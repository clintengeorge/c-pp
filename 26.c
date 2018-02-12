#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  char ch;
  printf("Enter value of a and b");
  scanf("%d %d",&a,&b);
  printf("Enter choice of operation");
  scanf("%c",&ch);
  switch(ch)
  {
     case '+':
            c=a+b;
            break;
     case '-':
            c=a-b;
            break;

     default:
             printf("invalid");
             break;
  }
getch();
}
