int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (nb);
	while (++i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
	}
	return (0);
}
