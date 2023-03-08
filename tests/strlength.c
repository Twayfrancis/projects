#include <stdio.h>
int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    return (1 + _strlen_recursion(s +1));
}
int main()
{
    char str[] = "Prince Koech Juma";
    int len = _strlen_recursion(str);
    printf("Lenth of string: %d\n", len);
    return(0);
}