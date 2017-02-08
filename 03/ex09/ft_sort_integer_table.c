void	ft_sort_integer_table(int *tab, int size)
{
	int	temp;
	int	i;
	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		i++;
	}	
}
