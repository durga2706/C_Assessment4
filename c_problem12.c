#include <stdio.h>
int main()
{
    int num,ones,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    sum=0;
loop:
    if(num!=0)
    {
        ones=num%10;
        sum=sum+ones;
        num=num/10;
        goto loop;
    }
    else
    {
        printf("%d",sum);
    }
    return 0;
}
