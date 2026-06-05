#include <stdio.h>

int main()
{
    int num,temp,last,count,power,first,middle,result;
    printf("Enter a number:");
    scanf("%d",&num);
    last= num%10;
    if(last%2==0)
    {
        printf("%d",num);
    }
    else
    {
        temp=num;
        count=0;
loop1:
        if(temp>0)
        {
            count=count+1;
            temp=temp/10;
            goto loop1;
        }
        power=1;
        temp=1;
loop2:
        if(temp<count)
        {
            power=power*10;
            temp=temp+1;
            goto loop2;
        }
        first=num/power;
        middle=num%power;
        first = first-1;
        result = first*power+middle;
        printf("%d",result);
    }

    return 0;
}
