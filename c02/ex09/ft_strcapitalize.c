char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (i != 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if (i != 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
						str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "Hello  42fdfgdfgHHTYTYFTYF";
	printf("%s", ft_strcapitalize(c));
}*/
