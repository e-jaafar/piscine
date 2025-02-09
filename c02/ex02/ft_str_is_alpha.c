int	ft_str_is_alpha(char *str)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "sdhf56  gdjsfgs";
	printf("%d", ft_str_is_alpha(c));
}*/
