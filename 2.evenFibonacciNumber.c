#include<stdio.h>
int main(void)
{
    int sum=2, a=1, b=2, c=0;
    while(c<4000000)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0)
            sum+=c;
    }
    printf("%d", sum);
}