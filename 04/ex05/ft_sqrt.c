int		ft_sqrt(int nb)
{
	int	a;
	int b;
	a = (nb + 1) / 2;
	b = 0;
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (1)
		{
			b = ( a + nb / a) / 2;
			if (a == 1)
			{
				return (0);
			}
			else if ( b >= a)
			{
				return (a);
			}
			else
			{
				a = b;
			}
		}
	}
}
