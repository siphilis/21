int		ft_recursive_factorial(int nb)
{
		if (nb > 12 || nb < -12)
			return (0);
		else if (nb > 1)
		{
			nb = nb * ft_recursive_factorial(nb - 1);
		}
		else if (nb < -1)
		{
			nb = nb * ft_recursive_factorial(nb + 1);
		}
		return (nb);
}
