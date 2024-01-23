#include <stdio.h>

int nod(int x,int y){
    while (x != 0 && y != 0 ){
        if (x > y){
            x = x % y;
        }
        else
            y = y % x;
    }
    return printf("%d\n", x + y);
}
int main (void){
    int x,y;
    scanf("%d%d", &x, &y);
    nod(x, y);
    return 0;
}