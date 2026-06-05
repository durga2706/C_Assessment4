#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=10000000)
        printf("8");
    else if(num>=1000000)
        printf("7");
    else if(num>=100000)
        printf("6");
    else if(num>=10000)
        printf("5");
    else if(num>=1000)
        printf("4");
    else if(num>=100)
        printf("3");
    else if(num>=10)
        printf("2");
    else
        printf("1");
    return 0;
}
