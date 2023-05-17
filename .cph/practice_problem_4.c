#include <stdio.h>
void change_it(int arr[], int count)
{
    arr[count - 1] = 100;
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
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
    change_it(arr, count);
    return 0;
}