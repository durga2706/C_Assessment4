#include<stdio.h>
int main()
{
    int x,sum;
    x=71;
    sum=0;
loop:
    if(x<80)
    {
        sum=sum+x;
        x=x+2;
    goto loop;
    }
    printf("%d\n",sum);
    return 0;
}
