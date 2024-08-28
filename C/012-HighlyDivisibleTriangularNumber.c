#include<stdio.h>
#include<math.h>
#define MAX 100000
int d[MAX]={1}, j=0, flag=0;
unsigned long long int triangular(unsigned long long int a)
{
    unsigned long long int tri=a*(a+1)/2;
    return tri;
}/* 
int isPrime(int z)
{
    for(int i=2; i<z; i++)
    {
        if(z%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void input(int x)
{
    p[j]=x;
    j++;
}
void prime(void)
{
    while(n<=MAX)
    {
        y++;  
        if(isPrime(y)==1)
        {
            n++;
            input(y);
        }
    }
}
int divisor(void)
{
    int div=1;
    for(i=18144; i<MAX; i++)
    {
        /* for(int k=0; k<MAX; k++)
        {
            if(t[i]==p[k])
            {
                flag=1;
                goto skip;
            }
        }
        printf("%llu %llu\n", i, t[i]);
        while(div<=sqrt(t[i]))
        {
            if(t[i]%div==0)
                d[i]++;
            div++;
        }
        if(d[i]==500)
            return i;
        div=1;/* 
        skip:
        if(flag==1)
        {
            flag=0;
            continue;
        } 
    }
    return 0;
}*/
int main(void)
{
    //prime();
    int mx=0;
    for(unsigned long long int i=0; i<MAX; i++)
    {
        int div=1, d=0;
        unsigned long long int tri=triangular(i);
        printf("%llu %llu ", i, tri);
        while(div<=tri/2)
        {
            if(tri%div==0)
                d++;
            div++;
            if(d==500)
            {
                printf("\n%llu %llu %d", i, tri, d);
                return 0;
            }
        }
        if(d>mx)
        mx=d;
        printf("%d %d\n", d, mx);
    }
}