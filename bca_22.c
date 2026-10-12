#include<stdio.h>
int main()
{



    int amount=100;
    int c=20;
//    printf("enter your amount : ");
//    scanf("%d",&amount);
//    switch (amount)
//    {
//    case 20:
//            printf("cold drink ordered......");
//             break;
//    case 80:
//             printf("burger ordered......");
//             break;
//     case 100:
//             printf("pizza ordered......");
//             break;        
//    default:
//             printf("check your amount......");
//             break;
//    }






    // if(amount==100)
    // {
    //     printf("pizaa ordered......");
    // }
    // else if(amount==80)
    // {
    //     printf("burger ordered......");
    // }
    // else if(amount<50)
    // {
    //     printf("cold drink ordered......");
    // }
    // else{
    //     printf("bhagoooo....");
    // }

    if(amount==100)
    {   int c;
        if(c==20)
        {
            printf("pizaa + cold drink ordered......");
        }
        else{
            printf("pizaa ordered......");
        }
    }
    else
    {
         if(amount==80)
        {
            if(c==20)
            {
            printf("burger + cold drink ordered......");
            }
            else
            {
            printf("burger ordered......");
            }
        }
        printf("check the condition........");
    }

    return 0;
}