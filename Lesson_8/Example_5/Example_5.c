#include <stdio.h>

void change_max_min(int size, int a[])
{
    int max = a[0];
    int min = a[0];
    int index_max;
    int index_min;
    int temp;
    for(int i = 0; i < size; i++) //поиск максимального и минимаьлного значения.
    {
        if(max < a[i])
        {
            max = a[i];
            index_max = i;
        }
        if(min > a[i])
        {
            min = a[i];
            index_min = i;
        } 
    }
    temp = a[index_max];
    a[index_max] = a[index_min];
    a[index_min] = temp;

    for(int j = 0; j < size; j++)
    {
        printf("%d ", a[j]); 
    }
    printf("\n");
}


int main(void) 
{
    int size;
    scanf("%d", &size); //вводим длинну массива
    int a[size];
    for(int l = 0; l < size; l++)
    {
        scanf("%d", &a[l]); //заполняем массив 
    }
    change_max_min(size, a); 
    return 0;
}