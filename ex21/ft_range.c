#include    <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *array;

    array = 0;
    if (min = max || min > max)
        return (NULL);
    if (!(array = (int *)malloc(sizeof(int) * (max - min))))
        return (NULL);
    return (array);
}
