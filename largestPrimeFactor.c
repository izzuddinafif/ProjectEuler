#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
void largestPrimeFactor(long long n)
{
    long long i;
    long long largest = 0;
    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            n = n / i;
            i--;
            if(i > largest)
            {
                largest = i;
            }
        }
    }
    printf("%lld is the largest prime factor\n", largest);
}
int main()
{
    largestPrimeFactor(600851475143);
    return 0;
}