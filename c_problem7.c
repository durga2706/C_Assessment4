#include <stdio.h>
int main()
{
    int x,tens,ones;
    x=11;
loop:
    if(x<=99)
    {
        tens=x/10;
        ones=x%10;
        if((tens+ones)==7)
        {
            printf("%d\n",x);
        }
        x=x+2;
        goto loop;
    }
    return 0;
}
