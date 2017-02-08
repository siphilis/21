int	ft_atoi(char *str)
{
		int	temp;

		int	*ptr_temp;
		ptr_temp = &temp;

		if (str[0] < 48 || str[0] > 57)
		{
				return (1);
		}
		else
		{
				int i;
				i = 0;
				while (str[i] > 47 && str[i] < 58)
				{
						if (i > 0)
						{
								*ptr_temp = (*ptr_temp * 10);
								*ptr_temp += (str[i] - 48);
						}
						else
								*ptr_temp = (str[i] - 48);
						i++;
				}
		}
		return (temp);
		return (0);
}
