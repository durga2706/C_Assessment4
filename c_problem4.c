#include <stdio.h>
int main()
{
    int x,sum;
    x=6;
    sum=0;
loop:
    if(x>=1)
    {
        sum=sum+x;
        x=x-1;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
