#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, j, x;
    double a;
    for(i=1; i<=1000; ++i)
    {
        for(j=1; j<=1000; ++j)
        {
            if((a=sqrt(pow(i, 2)+pow(j, 2)))==floor(a))
            {
                if(a+i+j==1000)
                {
                    x=a*i*j;
                    goto h;
                }
            }
        }
    }
    h:
    printf("%g*%d*%d = %d", a, i, j, x);
}
