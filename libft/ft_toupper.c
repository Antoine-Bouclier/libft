int		ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}

#include <stdio.h>
int main()
{
    char    c;
    char    result;

    c = 'u';
    printf("%d\n", c);
    result = ft_toupper(c);
    printf("%d\n", result);
}