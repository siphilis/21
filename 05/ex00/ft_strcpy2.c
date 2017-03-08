char		*ft_strcpy(char *dest, char *src)
{
	if (*src == '\0')
	{
		*dest = *src;
		return dest;
	}
	else
	{
		*dest =  *src;
		ft_strcpy(dest + 1, src +1);
	}
	return (0);
}
