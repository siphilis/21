int		ft_is_prime(int nb)
{
	int i;
	i = 2;

	if (nb == 2)
	{
		return (1);
	}
	else if (nb == 0 || nb == 1)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (0);
	}
	else
	{
		while (i < nb / 3)
		{
			if (nb % i == 0 && i != nb) 
			{
				return (0);
			}
			else if (i == 2)
			{
				i++;
			}
			else
			{
				i += 2;
			}
		}
	}
	return (1);
}
