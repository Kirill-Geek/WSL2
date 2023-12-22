#include <stdio.h>

int main(void)
{
    int a, b, c, x, z, max;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &z);
    if(a > b && a > c && a > x && a > z)
        max = a;
    
    if(b > a && b > c && b > x && b > z)
        max = b;
    
    if(c > a && c > b && c > x && c > z)
        max = c;
    
    if(x > a && x > b && x > c && x > z)
        max = x;
    
    if(z > a && z > b && z > c && z > x)
        max = z;
    printf("%d\n", max);
    return 0;
}