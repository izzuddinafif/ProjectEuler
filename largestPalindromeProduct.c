#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
// void isPalindrome(int n)
// {
//     sprintf(str, "%d", n);
//     int len = strlen(str);
//     int i;
//     for(i = 0; i < len/2; i++)
//     {
//         if(str[i] = str[len - i - 1])
//         {
//             printf("%s is a palindrome\n", str);
//             return;
//         }
//     }
// }
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
        printf("%d is a palindrome\n", n);
        return true;
    }
    else
        return false;
}
int main()
{
    for(int i=900;i<999;i++)
    {
        for(int j=900;j<999;j++)
        {
            if(isPalindrome(i*j)==true)
            {
                printf("%d x %d\n", i, j);
            }
        }
    }
    return 0;
}