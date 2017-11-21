#include    <unistd.h>

void     ft_putchar(char c)
{
    write(1, &c, 1);

}

void     ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

void     ft_swap(char **argv)
{
    int i;
    char *tmp;

    i = 1;
    tmp = 0;
    while (argv[i] && argv[i + 1])
    {
        if (ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            tmp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = tmp;
            i = 0;
        }
        i++;
    }
}

int     ft_sort_params(char **argv)
{
    int i;

    i = 1;
    ft_swap(argv);
    while (argv[i])
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_sort_params(argv);
    }
    return (0);
}
