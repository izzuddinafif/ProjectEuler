#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i, x[1000], a;
    char n[20][1000], h[1000];
    for(i=0; i<20; i++)
    {
        scanf("%s", n[i]);
    }
    for(i=0; i<20; i++)
    {
        strcat(h, n[i]);
    }
     for(i=0; i<1000; i++)
    {
        x[i]=h[i]-'0';
    }
    for(i=0; i<1000; i++)
    {
        printf("%d", x[i]);
    }
    for(i=1000; i>=0; i)
}