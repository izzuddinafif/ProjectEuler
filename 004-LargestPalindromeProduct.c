#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;
    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(rev == n)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int pal=0, i, j, li, lj;
    for(i=999;i>900;i--)
    {
        for(j=999;j>900;j--)
        {
            if(isPalindrome(i*j)==true)
            {
                if(i*j>pal)
                {
                    pal=i*j;
                    li=i;
                    lj=j;
                }
            }
        }
    }
    printf("%d x %d = %d\n", li, lj, pal);
    return 0;
}