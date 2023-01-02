#include<stdio.h>
int d[400], temp=1; x=0;
void inputData(void)
{
    for(int i=0; i<400; i+=20)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &d[i], &d[i+1], &d[i+2], &d[i+3], &d[i+4], &d[i+5], &d[i+6], &d[i+7], &d[i+8], &d[i+9], &d[i+10], &d[i+11], &d[i+12], &d[i+13], &d[i+14], &d[i+15], &d[i+16], &d[i+17], &d[i+18], &d[i+19]);
    }
}
void gridMulti(void)
{
    for(int i=0; i<400; i++)
    {
        if(i>=0 && i<400-3) // left & right
        {
            for(int k=i; k<=i+3; k++)
            {
                temp*=d[k];
            }
            if(temp>x)
                x=temp;
            temp=1;
        }
        if(i+60<400) // up & down
        {
            for(int k=i; k<=i+60; k+=20)
            {
                temp*=d[k];
            }
            if(temp>x)
                x=temp;
            temp=1;
        }
        if(i+63<400) // diagonal up-down right
        {
            for(int k=i; k<=i+63; k+=21)
            {
                temp*=d[k];
            }
            if(temp>x)
                x=temp;
            temp=1;
        }
        if(i+57<400) // diagonal up-down left
        {
            for(int k=i; k<=i+57; k+=19)
            {
                temp*=d[k];
            }
            if(temp>x)
                x=temp;
            temp=1;
        }
    }
    } 
int main(void)
{
    inputData();
    gridMulti();
    puts("");
    for(int i=0; i<400; i+=20)
    {
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", d[i], d[i+1], d[i+2], d[i+3], d[i+4], d[i+5], d[i+6], d[i+7], d[i+8], d[i+9], d[i+10], d[i+11], d[i+12], d[i+13], d[i+14], d[i+15], d[i+16], d[i+17], d[i+18], d[i+19]);
    }
    puts("");
    printf("%d", x);
}
//ans 70600674