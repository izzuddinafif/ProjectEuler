#include<stdio.h>
int d[20][20], p[196][4]; //14x14
void inputData(void)
{
    for(int j=0; j<20; j++)
    {
        for(int i=0; i<20; i++)
        {
            scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &d[j][i], &d[j][i+1], &d[j][i+2], &d[j][i+3], &d[j][i+4], &d[j][i+5], &d[j][i+6], &d[j][i+7], &d[j][i+8], &d[j][i+9], &d[j][i+10], &d[j][i+11], &d[j][i+12], &d[j][i+13], &d[j][i+14], &d[j][i+15], &d[j][i+16], &d[j][i+17], &d[j][i+18], &d[j][i+19]);
        }
    }  
}
void
int main(void)
{
    inputData();
    puts("");
    for(int i=0; i<400; i+=20)
    {
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", d[i], d[i+1], d[i+2], d[i+3], d[i+4], d[i+5], d[i+6], d[i+7], d[i+8], d[i+9], d[i+10], d[i+11], d[i+12], d[i+13], d[i+14], d[i+15], d[i+16], d[i+17], d[i+18], d[i+19]);
    }
    puts("");
}