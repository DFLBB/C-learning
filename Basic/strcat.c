#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("Concatenated strings: %s\n", ft_strcat(argv[1], argv[2]));
	return (0);
}