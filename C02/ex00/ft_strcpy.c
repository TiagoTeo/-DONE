char	*ft_strcy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] == src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
