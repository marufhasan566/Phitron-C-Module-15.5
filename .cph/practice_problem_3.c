#include <stdio.h>
int count_odd(int arr[], int count)
{
    int totalOdd = 0;
    for (int i = 0; i < count; i++)
    {
        // printf("%d\n", arr[i]);
        if (arr[i] % 2 == 1)
        {
            totalOdd++;
        }
    }
    return totalOdd;
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = count_odd(arr, count);
    printf("%d", result);

    return 0;
}