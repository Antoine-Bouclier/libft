#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char    *d;
    char    *s;

    d = dest;
    s = src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
int main()
{
    char    src[] = "hello comment tu vas ?";
    char    dest[25];

    memcpy(dest, src, 10);
    printf("%s\n%s\n", src, dest);

    char    src1[] = "hello comment tu vas ?";
    char    dest1[8];

    ft_memcpy(dest1, src1, 10);
    printf("%s\n%s\n", src1, dest1);
}