int	ft_str_is_uppercase(char *str)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "ASDGFEF";
	printf("%d", ft_str_is_uppercase(c));
}*/
