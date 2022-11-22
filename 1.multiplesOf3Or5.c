#include<stdio.h>
int main(void)
{
    int sum=0, a=3, b=5;
    while(a<1000)
    {
        sum+=a;
        a+=3;
    }
    while(b<1000)
    {
        if(b%3!=0)
        sum+=b;
        b+=5;
    }
    printf("%d", sum);
}