#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *dest;
    size_t i;

    dest = s;
    i = 0;
    while (i++ < n)
    {
        *dest++ = c;
    }
}

#include <stdio.h>
int main()
{
    char str1[25] = "Salut comment tu vas ?";
    char str2[25] = "Salut comment tu vas ?";
    memset(str1, 122, 5);
    ft_memset(str2, 122, 5);
    printf("native : %s\n", str1);
    printf("homemade : %s\n", str2);
}