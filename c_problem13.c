#include<stdio.h>
int main()
{
    int x,ones,Reverse;
    printf("Enter a number:");
    scanf("%d",&x);
    Reverse=0;
loop:
    if(x!=0)
    {
        ones=x%10;
        Reverse=(Reverse*10)+ones;
        x=x/10;
        goto loop;
    }
    else
    {
        printf("%d",Reverse);
    }
    return 0;
}
