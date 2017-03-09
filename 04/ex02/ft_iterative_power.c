int		ft_iterative_power(int nb, int power)
{
	int i;
	i = 0;
	int	result;
	result = nb;
	if (nb <= 0 || power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i + 1 < power)
		{ 
			i++;
			result = result * nb;
		}
	}
	return (result);
}
