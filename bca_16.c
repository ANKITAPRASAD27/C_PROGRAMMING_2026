#include<stdio.h>//hearder file 
#include<stdbool.h>
int main()//starting
{
    // printf("pass");
    // printf("fail");
    // if(50>90)
    // {
    //     printf("50 is greater than 30...");
    // }
    // else{
    //     printf("enter a valid statement.....");
    // }

    // int s1,s2,s3,total,avg;
    // printf("enter your hindi marks");
    // scanf("%d",&s1);
    // printf("enter your english marks");
    // scanf("%d",&s2);
    // printf("enter your math marks");
    // scanf("%d",&s3);
    // total = s1 +s2 +s3;
    // printf("total number : %d\n", total);
    // avg = total/3;
    // printf("total avg : %d\n", avg);
    // if(avg >=90)
    // {
    //     printf("Grade A");
    // }
    // else if(avg >= 50)
    // {
    //     printf("Grade B");
    // }
    // else{
    //     printf("fail");
    // }


    // if(20>=10)
    // {
    //     if(20==20)
    //     {
    //         printf("20 is greater than 10 and 20 is equal to 20");
    //     }
        
    // }
    // else
    // {
    //         if(20<=30)
    //         {
    //             printf("20 is less than 30 ");
    //         }
    //         else{
    //             printf("invalid........");
    //         }
    // }


    // if(0,1)
    // {
    //     printf("hi......");
    // }
    // else{
    //     printf("bye......");
    // }
    // if(1)
    // {
    // printf("hi...\n");
    // printf("welcome\n");
    // }
    // else
    // {
    // printf("bye...\n");
    // printf("goodbye...\n");
    // }

    int day;
    printf("enter your number");
    scanf("%d",&day);
    switch (day)
    {
        case 1 :
        printf("monday");
        break;
        case 2 :
        printf("tue");
        break; 
        case 3 :
        printf("wed");
        break; 
        case 4 :
        printf("thr");
        break; 
        case 5 :
        printf("fri");
        break; 
        case 6 :
        printf("sat");
        break;
        case 7 :
        printf("sunday");
        break;
        default:
        printf("invalid........");

    }


    return 0;
}