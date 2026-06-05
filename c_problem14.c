#include <stdio.h>
int main()
{
    int num,temp,last,first,count,power,middle,result;
    printf("Enter a number:");
    scanf("%d",&num);
    last=num%10;
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
    middle=(num%power)/10;
    result=last*power+middle*10+first;
    printf("%d",result);
    return 0;
}
