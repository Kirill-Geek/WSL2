#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) 
{
    return *(int*)a - *(int*)b;
}
void sort_array(int size, int a[])
{
    qsort(a, size, sizeof(int), cmp );
    for(int i = 0 ; i < size; i++) 
    {
        printf("%d ", a[i]);
    }
} 
/*
int main(void) 
{
    int n;
    scanf("%d", &n); //вводим длинну массива
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //заполняем массив
        int *a = &a[0];  
    }
    sort_array(n, a); //отправляем на сортировку 
    return 0;
}
*/