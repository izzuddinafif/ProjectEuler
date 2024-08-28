#include<stdio.h>
int n=2, y=2;
int isPrime(int y)
{
    for(int i=2; i<y; i++)
    {
        if(y%i==0)
        {
            return 0;
        }
    }   
    return 1;
}
int main(void)
{
    while(n<=10001)
    {
        y++; 
        if(isPrime(y)==1)
            n++;  
    }
    printf("%d ", y);
}