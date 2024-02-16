#include <stdio.h>

int is_two_same(int size, int a[])  //поиск двух одинаковых элементов.
{
    int temp;
    for(int i = 0; i < size; i++)
    {
        temp = a[i];
        for(int k = i + 1; k < size; k++)
        {
            if(temp == a[k])
            {
                return 1;
            }
        }
    }
    return 0;
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
    if(is_two_same(size, a) == 1)
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }
    return 0;
}