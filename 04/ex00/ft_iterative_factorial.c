int		ft_iterative_factorial(int nb)
{
	int	result;
	result = nb;
	while (nb - 1 >1)
	{
		if (result < 0)
		{
				return(0);
		}
		result = result * (nb-1);
		nb--;
	}
		return (result);
}
