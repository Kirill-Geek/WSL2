#include <stdio.h>

int main(void)
{
    int a;
    int i = 0;
    scanf("%d", &a);
    while(a != 0){
        i++;
        a = a / 10;
    }
    if(i == 3){
        printf("YES\n");
    }
    else 
        printf("NO\n");
    return 0;
}
