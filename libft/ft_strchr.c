#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int     i;
    char    *str;

    str =  s;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (*str);
        i++;
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