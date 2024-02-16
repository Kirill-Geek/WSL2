#include <stdio.h>

int find_max_array(int size, int a[]) // нахождение максимального числа в массиве
{
    int max = a[0];
    for(int i = 0; i <size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
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
    printf("Максимально число - %d\n", find_max_array(size, a)); 
    return 0;
}