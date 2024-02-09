#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    float x;
    scanf("%d", &n);
    float count = n;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    x = sum/count;
    printf("%.3f\n", x);
    return 0;
}
