#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum, arg;
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    arg = a * b * c;
    printf("%d+%d+%d=%d\n",a, b, c, sum);
    printf("%d*%d*%d=%d\n",a, b, c, arg);
    return 0;
}