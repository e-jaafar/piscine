char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "Hello";
	printf("%s", ft_strlowcase(c));
}*/
