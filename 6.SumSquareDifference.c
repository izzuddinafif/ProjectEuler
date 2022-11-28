#include<stdio.h>
#include<math.h>
long long int SqrOfSum(int xx)
{
    long long int sumx=0;
    for(int i=1; i<=xx; ++i)
        sumx+=i;
    return pow(sumx, 2);
}
long long int SumOfSqr(int xy)
{
    long long int sumy=0;
    for(int i=1; i<=xy; ++i)
        sumy+=pow(i, 2);
    return sumy;
}
int main(void)
{
    int x=100;
    long long int y=SqrOfSum(x), z=SumOfSqr(x);
    printf("%lld - %lld = ", y, z);
    printf("%lld", y-z);
}