#include <stdio.h>

int main(void)
{
    int a;
    int winter_1 = 12;  
    int winter_2 = 2;
    int sprint = 5;
    int summer = 8;
    int autumn = 11; 

    scanf("%d", &a);
    
    if (a <= winter_2 || a == winter_1)
        printf("winter\n");
    
    if (a <= sprint && a > winter_2 )
        printf("sprint\n");

    if (a <= summer && a > sprint )
        printf("summer\n");

    if (a <= autumn && a > summer )
        printf("autumn\n");
    
    return 0;
}