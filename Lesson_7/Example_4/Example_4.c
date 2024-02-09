#include <stdio.h>

int main(void)
{
    int size;
    int temp;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int x = 0; x < size - 1; x++)
    {
        for(int y = 0; y < size - 1; y++)
        {
            if((arr[y]) % 10 > (arr[y + 1]) % 10)
            {
                temp = arr[y + 1];
                arr[y + 1] = arr[y];
                arr[y] = temp;
            }
        }
    }
    for(int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}

