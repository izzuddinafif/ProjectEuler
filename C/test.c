#include<stdio.h>
int n=0, y=0, p[9999999], j=0;
int isPrime(int z)
{
    for(int i=2; i<z; i++)
    {
        if(z%i==0)
        {
            return 0;
        }
    }
    return(1);
}
void input(int x)
{
    p[j]=x;
    j++;
}
int main(void)
{
    while(n<=100000)
    {
        y++;  
        if(isPrime(y)==1)
        {
            n++;
            input(y);
        }
    }
    printf("%d \n", y);
    for(int i=0; i<=100000 ;i++)
    {
        printf("%d %d\n", p[i], i);
    }
}