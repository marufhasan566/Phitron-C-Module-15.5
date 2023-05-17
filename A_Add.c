#include <stdio.h>
int summation(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = summation(a, b);
    printf("%d\n", result);
    return 0;
}