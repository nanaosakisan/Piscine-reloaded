#include "sources.h"

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void     ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void     ft_display_file(int fd)
{
    int     ret;
    char    buf[BUF_SIZE + 1];

    ret = 0;
    while ((ret = read(fd, buf, BUF_SIZE)) > 0)
    {
        buf[ret] = '\0';
        ft_putstr(buf);
    }
    if (ret == -1)
        ft_putstr("read() failed\n");
}

int     main(int argc, char **argv)
{
    int fd;

    fd = 0;
    if (argc < 2)
        ft_putstr("File name missing.\n");
    else if (argc > 2)
        ft_putstr("Too many arguments.\n");
    else
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
            ft_putstr("open() failed\n");
        else
        {
            ft_display_file(fd);
            if((close(fd)) == -1)
                ft_putstr("close() failed");
        }
    }
    return (0);
}
