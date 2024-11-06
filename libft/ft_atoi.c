int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    while (nptr[i] == ' ' || nptr[i] >= 9 && nptr[i] <= 13)
    {
        i++;
    }
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
        result = result * 10 + (nptr[i] - 48);
        i++;
    }
    return (result * sign);
}

/*#include <stdlib.h>
#include <stdio.h>
int main()
{
    char    nptr[] = "    +-+-1250abd";
    printf("%d\n", atoi(nptr));
    printf("%d\n", ft_atoi(nptr));
}*/