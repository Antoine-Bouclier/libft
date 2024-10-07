int ft_atoi(char *str)
{
    int     i;
    int     sign;
    int     nb;

    i = 0;
    sign = 1;
    nb = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
            i++;
        }
        while (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-')
            {
                sign *= -1;
            }
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            nb = nb * 10 + (str[i] - 48); 
            i++;
        }
        i++;
    }
    return (nb * sign);
}

#include <stdio.h>
int main(void)
{
    char    str[] = "    --+-1250abd";

    printf("%d", ft_atoi(str));
}