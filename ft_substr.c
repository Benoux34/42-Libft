#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t  a;

    if (start > ft_strlen(s))
        return ("");
    str = (char *) malloc(sizeof(char) * len + 1);
    if (!str)
        return (0);
    a = 0;
    while (a < len)
    {   
        str[a++] = s[start];
        start++;
    }
    str[a] = '\0';
    return (str);
}