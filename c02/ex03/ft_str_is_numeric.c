int	ft_str_is_numeric(char *str)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= '0' && c <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "55gdfhgdf";
	printf("%d", ft_str_is_numeric(c));
}*/
