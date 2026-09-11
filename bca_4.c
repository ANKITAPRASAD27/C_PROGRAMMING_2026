#include<stdio.h>// header file
int main()//main function
{ 
    int num;
    printf("enter your number: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    
//    printf("addition :%d\n",a+b);
//    printf("sub :%d\n",a-b);
//    printf("mul :%d\n",a*b);
//    printf("div :%d\n",a/b);
//    printf("rem :%d\n",a%b);
// if(a>=18)
// {
//     printf("yes,you can give the vote...");
// }


    return 0;
}