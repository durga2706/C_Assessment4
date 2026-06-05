#include<stdio.h>
int main()
{
    int x,i,count;
    printf("Enter a number:");
    scanf("%d",&x);
    i=1;
    count=0;
loop:
    if(i<=x)
    {
        if(x%i==0)
        {
            count++;
        }
        i++;
        goto loop;
    }
    if(count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}
