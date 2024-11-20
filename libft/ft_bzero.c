#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i++ < n)
	*dest++ = 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[25] = "hello how are you doing ?";
    char str2[25] = "hello how are you doing ?";

    bzero(str1 + 8, 1);
    printf("native : %s\n", str1);

    ft_bzero(str2 + 8, 14);
    printf("homemade : %s\n", str2);
    return 0;
}