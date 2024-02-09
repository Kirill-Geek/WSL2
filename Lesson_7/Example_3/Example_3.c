#include <stdio.h>

int main(void)
{
    int temp;
    int size;
    int i = 0;
    scanf("%d", &size);
    int arr[size];
    for(int x = 0; x < size; x++)
    {
        scanf("%d", &arr[x]);
    }
    
    for(int index = 0; index < size - 4; index++)
    {
        temp = arr[index + 4];
        arr[index + 4] = arr[i];
        arr[i] = temp;
        i +=1;
        if(i == 4) i = 0;
    }

    for(int a = 0; a < size; a++)
    {
        printf("%d ", arr[a]);
    }
    printf("\n");
    return 0;
}