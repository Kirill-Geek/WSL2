#include <stdio.h>

int main(void)
{
    int a, b, c, x, z, min;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &z);
    if(a < b && a < c && a < x && a < z)
        min = a;
    
    if(b < a && b < c && b < x && b < z)
        min = b;
    
    if(c < a && c < b && c < x && c < z)
        min = c;
    
    if(x < a && x < b && x < c && x < z)
        min = x;
    
    if(z < a && z < b && z < c && z < x)
        min = z;
    printf("%d\n", min);
    return 0;
}