#include <string.h>

char *ft_strchr(const char *s, int c)
{
    const char    *str;

    str = s;
    while (*str != '\0')
    {
        if (*str == c)
            return ((char *)str);
        *str++;
    }
    return (NULL);
}

#include <stdio.h>
int main()
{
    char    s[] = "Salut comment tu vas ?";
    char    c = 'a';
    char    *result = ft_strchr(s, c);
    printf("%s\n", result);

}