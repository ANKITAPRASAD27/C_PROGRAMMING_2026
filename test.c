#include<stdio.h>
int main ()
{
   int num;
   printf("enter your num");
   scanf("%d",&num);
   if (num>0 && num%2==0)
   {
    printf(" it is a positive and even ");
   }
   else{
    printf(" please enter a valid number........ ");
   }
  
}