#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
	ft_putchar('\n');
	i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv);
	return(0);
}
