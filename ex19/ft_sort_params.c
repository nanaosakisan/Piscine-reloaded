#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char *argv[i], char *argv[j])
{
	int tmp;

	tmp = 0;
	while (argv[i][k] && argv[j][k])
	{
		if(ft_strcmp(argv[i][k], argv[j][k]) > 0)
		{
			&tmp = &argv[i];
			&argv[i] = &argv[j];
			&argv[j] = &tmp;
			i = 1;
		}	
		i++;
	}
}

void	ft_sort_params(char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	j = i + 1;
	k = 0;
	ft_swap(argv[i][k], argv[j][k]);
	while (argv[i])
	{
		k = 0;
		while (argv[i][k])
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argv);
	return(0);
}
