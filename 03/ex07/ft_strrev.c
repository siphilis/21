char	*ft_strrev(char *str)
{
	int	i;
	int	f;
	i = 0;
	f = 0;
	char	temp[254];

	while (str[i] != 0)
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		temp[f] = str[i];
		i--;
		f++;
	}
	temp[f] = str[i];
	f++;
	temp[f] = 0;
	str = temp;
	return (str);
}
