#include <stdio.h>

int print_num(int num)
{
    if(num > 0)
    {
        printf("%d ", num % 10);
        num /= 10;
        return print_num(num);
    }
    printf("\n");
    return 0;
}

int main(void) {
    int n, rev = 0, remainder;
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    print_num(rev);
    return 0;
}