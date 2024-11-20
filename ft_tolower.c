int		ft_toupper(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);
}

#include <stdio.h>
int main()
{
    char    c;
    char    result;

    c = 'U';
    printf("%d\n", c);
    result = ft_toupper(c);
    printf("%d\n", result);
}