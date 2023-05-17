#include <stdio.h>
// #include <string.h>
int my_len(char string[])
// Or we can write declare this function as below:
//  int my_len(char string[])
{
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        // printf("%c\n", string[i]);
        length++;
    }
    return length;
}
int main()
{
    char string[100];
    scanf("%s", &string);
    int result = my_len(string);
    // printf("%d\n", strlen(string));
    printf("%d", result);
    return 0;
}