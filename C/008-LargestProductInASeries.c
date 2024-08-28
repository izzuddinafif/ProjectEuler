#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i, x[1000], a;
    char n[20][1000], h[1000];
    for(i=0; i<20; i++)
    {
        scanf("%s", n[i]); // Taking 20 lines of string as input
    }
    for(i=0; i<20; i++)
    {
        strcat(h, n[i]); // Appending 20 lines of string into a single string
    }
     for(i=0; i<1000; i++)
    {
        x[i]=h[i]-'0'; // Converting from char to int
    }
    // for(i=0; i<1000; i++)
    // {
    //     printf("%d", x[i]);
    // }
    long long int largest=1;
    for(i=1000; i>=12; i--)
    {
        long long int val=1;
        for(int j=i; j>=i-12; j--)
        {
            val*=x[j];
        }
        if(val>largest)
            largest=val;
    }
    printf("%lld", largest);
}