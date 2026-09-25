#include<stdio.h>
int main()
{
    // int a =10;
    // printf("%d",a);
    // printf("%d",a++);
    // printf("%d",a);

    // printf("%d",a++);
    int i = 0;
    int j = i++ || ++i;
    printf("%d%d",j,i);

}