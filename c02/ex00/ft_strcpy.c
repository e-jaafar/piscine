
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest || !src)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
