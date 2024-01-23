#include <stdio.h>

int count(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        if(i != n){
            result =  result * 2;
        }
    }
    return printf("%d\n",result);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    count(n);
    return 0;
}