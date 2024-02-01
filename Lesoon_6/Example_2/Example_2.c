#include <stdio.h>

int print_A_B(int x, int y)
{   
    if(x <= y)
    {
        printf("%d ", x++);
        return print_A_B(x, y);
    }
    if(x == y)
    {
        return 0;
    }
}

int print_B_A(int x, int y)
{   
    if(x >= y)
    {
        printf("%d ", x--);
        return print_B_A(x, y);
    }
    if(x == y)
    {
        return 0;
    }
}

int main (void)
{
    int x,y;
    scanf("%d%d", &x, &y);
    if(x > y)  
    {
        print_B_A(x,y);
    }
    else
    {
        print_A_B(x,y);
    }
}