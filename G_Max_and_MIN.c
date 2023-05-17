#include <stdio.h>
#include <limits.h>
void print(int arr[], int count)
{
    // printf("%d\n", *(arr+1));
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    print(arr, count);
    return 0;
}