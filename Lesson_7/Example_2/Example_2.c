#include <stdio.h>

int main(void)
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int temp;
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i]; 
        }
    }
    printf("min = %d \n", min);
    return 0;
}