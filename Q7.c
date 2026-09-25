// Q7.Multi-Subject Percentage Grade: Take marks for 5 subjects from the user, calculate the average percentage, and display the corresponding grade.
#include <stdio.h>

int main()
{
    int math,english,hindi,bio,science,Total,avg;
    printf("Enter the Math Number :");
    scanf("%d",&math);
    printf("Enter the English Number :");
    scanf("%d",&english);
    printf("Enter the Hindi Number :");
    scanf("%d",&hindi);
    printf("Enter the Bio Number :");
    scanf("%d",&bio);
    printf("Enter the Science Number :");
    scanf("%d",&science);

    Total = math + english + hindi + bio + science;
    printf("Total Marks : %d\n",Total);
    avg = Total / 5;
    printf("Average Marks : %d\n",avg);
    if(avg >= 80)
    {
        printf("Grade A");
    }
    else if(avg>=60)
    {
        printf("Grade B");
    }
    else if(avg>=40)
    {
        printf("Grade c");
    }
    else
    {
        printf("fail");
    }
    return 0;
}