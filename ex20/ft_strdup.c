#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_strdup(char *src)
{
    char    *dest;
    int     i;

    i = 0;
    dest = 0;
    if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
