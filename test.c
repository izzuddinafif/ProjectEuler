#include<stdio.h>
#include<math.h>
int isPrime(int y)
{
    for(int i=2; i<sqrt(y); i++)
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
    int n=2, x;
    long long sum=0;
    while(n<=2000000)
    { 
        if(isPrime(n)==1)
        {
            sum+=n; 
            printf("%d\n", n);
        }
        n++; 
    }
    printf("%lld\n", sum);
}