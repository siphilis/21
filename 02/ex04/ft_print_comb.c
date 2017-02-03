void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	a = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				c++;
				if (a + b + c != 25)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}
