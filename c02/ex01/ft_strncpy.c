char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[] = "Hello";
	char	copy[] = "testGGG";

	printf("ft_strncpy: %s\n", ft_strncpy(copy, c, 6));
	printf("strncpy: %s\n", strncpy(copy, c, 2));
}*/
