#include <stdio.h>

int count = 0;
int dec_to_bin(int n)
{
    if(n >= 2)
    {
        dec_to_bin(n / 2);
    }
    if((n%2) == 1)
    {
        count = count + 1;
    }
    return count;
} 

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n",dec_to_bin(n));
    return 0;
}