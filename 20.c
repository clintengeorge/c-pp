# include <stdio.h> 
# include <conio.h>
int main() 
{ 
 int i, a, b ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &a) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &b) ; 
 printf("\nThe numbers divisible by %d are :\n\n", b) ; 
 for(i = 1 ; i <= a ; i++) 
  if(i % b == 0) 
   printf("%d\t", i) ; 
 return 0; 
}
