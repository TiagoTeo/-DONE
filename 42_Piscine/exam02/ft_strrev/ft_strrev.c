char	*ft_strrev(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (i < size / 2)
	{
		str[i] += str[size - i];
		str[size - i] = str[i] - str[size - i];
		str[i] -= str[size - i];
	}
	return (str);
}
