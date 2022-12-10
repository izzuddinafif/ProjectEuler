#include<stdio.h>
int d[20][20], temp=1; x=0;
void inputData(void)
{
    for(int i=0; i<20; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &d[i][1], &d[i][2], &d[i][3], &d[i][4], &d[i][5], &d[i][6], &d[i][7], &d[i][8], &d[i][9], &d[i][10], &d[i][11], &d[i][12], &d[i][13], &d[i][14], &d[i][15], &d[i][16], &d[i][17], &d[i][18], &d[i][19], &d[i][20]);
    }  
}
void gridMulti(void)
{
    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            if(j-4>=0 && j<=20) // left & right
            {
                for(int k=j-4; k<j; k++)
                {
                    temp*=d[i][k];
                }
                if(temp>x)
                    x=temp;
                temp=1;
            }
            if(i-4>=0 && i<=20) // up & down
            {
                for(int k=i-4; k<i; k++)
                {
                    temp*=d[k][j];
                }
                if(temp>x)
                    x=temp;
                temp=1;
            }
            if(i+4<=20 && j+4<=20) // diagonal up-down right
            {
                int k=i, l=j;
                while(k<i+4 && l<j+4)
                {
                    temp*=d[k][l];
                    k++;
                    l++;   
                }
                if(temp>x)
                    x=temp;
                temp=1;
            }
            if(i-4<=0 && j-4<=0) // diagonal up-down left
            {
                int k=i, l=j;
                while(k>i-4 && l>j-4)
                {
                    temp*=d[k][l];
                    k--;
                    l--;
                }
                if(temp>x)
                    x=temp;
                temp=1;
            }
        }
    }

}
int main(void)
{
    inputData();
    gridMulti();
    puts("");
    for(int i=0; i<20; i++)
    {
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", d[i][1], d[i][2], d[i][3], d[i][4], d[i][5], d[i][6], d[i][7], d[i][8], d[i][9], d[i][10], d[i][11], d[i][12], d[i][13], d[i][14], d[i][15], d[i][16], d[i][17], d[i][18], d[i][19], d[i][20]);
    }  
    puts("");
    printf("%d", x);
}