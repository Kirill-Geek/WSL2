#include <stdio.h>

int main(void)
{
    int a, b;
    int diff;
    scanf("%d%d", &a, &b);
    diff = a - b;
    printf("%d-%d=%d\n",a, b, diff);
    return 0;
}