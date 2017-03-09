void	ft_print_comb2(void)
{
	int	a;
	int	b;
	a = 00;
	b = 00;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a > 9)
			{
				int	i;
				i = 0;
				int	n;
				n = a;
				while (n > 9)
				{
					n = n - 10;
					i++;
				}
				ft_putchar(i + 48);
				ft_putchar(n + 48);
			}
			else
			{
				ft_putchar('0');
				ft_putchar(a + 48);
			}
			ft_putchar(' ');

			if (b > 9)
			{
				int	i;
				i = 0;
				int	n;
				n = b;
				while (n > 9)
				{
					n = n - 10;
					i++;
				}
				ft_putchar(i + 48);
				ft_putchar(n + 48);
			}
			else
			{
				ft_putchar('0');
				ft_putchar(b +48);
			}
			if (a + b != 197)
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}
