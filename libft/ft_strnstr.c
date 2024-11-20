#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	res = (char *)big;
	if (*little == '\0')
		return (res);
    while (res[i] != 0)
    {
		j = 0;
		while (res[i + j] == little[j] && j < len)
		{
			j++;
		}
		if (j == len)
		{
			return (res + i);
		}
		i++;
    }
	return (NULL);
}
#include <stdio.h>
int  main()
{
     char *big = "hello comment vas tu ?";
     char *little = "hele";

     printf("%s", ft_strnstr(big, little, 4));
}