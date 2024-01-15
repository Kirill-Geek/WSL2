#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a;
    bool flag;
    scanf("%d", &a);
    while(a != 0){
        if(a % 2 == 0){
            a = a / 10;
        }

        if(a % 2 != 0){
            flag = false;
            printf("NO\n");
            goto EXIT;
        }
    }
EXIT:
    if(flag){
        printf("YES\n");
    }
    
    return 0;
}