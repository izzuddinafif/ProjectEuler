#include<stdio.h>
int evenDiv(int x)
{
    int y=1;
    while(y<=20)
    {
        if(x%y==0)
            y++;
        else
            return 0;
    }
    return 1;
}
int main(void)
{
    int x=1;
    while(evenDiv(x)==0)
    {
        x++;
    }
    printf("%d", x);
}