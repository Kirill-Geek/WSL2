#include <stdio.h>
int count(int n)
{
    int res;
    res = ((n + 1) * n) / 2;
    printf("%d\n", res); 
}
int main(void)
{
    int n;
    scanf("%d", &n);
    count(n);
}