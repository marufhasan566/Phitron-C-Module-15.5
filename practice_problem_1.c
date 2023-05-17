#include <stdio.h>
int my_abs(int n)
{
    int result;
    if (n > 0)
    {
        result = n;
    }
    if (n < 0)
    {
        result = -1 * n;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    int result = my_abs(n);
    printf("%d", result);
    return 0;
}