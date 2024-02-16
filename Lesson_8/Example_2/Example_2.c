#include <stdio.h>


void sort_even_odd(int n, int a[])
{
    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int k = 0 ; k < n - 1 ; k++)
        {
            if(a[k] %2 != 0 && a[k+1] %2 == 0)
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }   
        }
    }        
        
    for(int c = 0 ; c < n; c++) 
    {
        printf("%d ", a[c]);
    }
    printf("\n");
} 

int main(void) 
{
    int n;
    scanf("%d", &n); //вводим длинну массива
    int a[n];
    for(int l = 0; l < n; l++)
    {
        scanf("%d", &a[l]); //заполняем массив
        //int *a = &a[0];  
    }
    sort_even_odd(n, a); //отправляем на сортировку 
    return 0;
}
