#include<stdio.h>
int main()
{

    int mark_1 = 140;
    int mark_2 = 80;
    int number ;
    printf("enter your number");
    scanf("%d",&number);

    if(number>=mark_1)
    {
        printf("grade A");
    }
    else if(number==mark_2)
    {
        printf("grade B");

    }
    else{
        printf("fail");

    }

    // int pass =50;
    // int a;
    // printf("enter your number");
    // scanf("%d",&a);
    // printf("pass");
    // printf("fail");
    // if(a>=pass)
    // {
    //     printf("pass");
       
    // }
    // else{
    //     printf("fail");
    // }
    return 0;
}