#include <stdio.h>
int is_happy_number(int n){
    int resx = 0;
    int resy = 1;
    if(n > 0){
        while ( n != 0){
            resx = resx + (n % 10);
            resy = resy * (n % 10);
            n = n/10;
        }  
    }
    else
        printf("Введено отрицательное число\n");
    if (resx == resy){
        printf("Yes\n");
    }
    else
        printf("No\n");
    printf("resx= %d resy= %d\n", resx, resy);
}
int main(void){
    int n;
    scanf("%d", &n);
    is_happy_number(n);
    return 0;
}