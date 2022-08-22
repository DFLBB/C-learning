#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*d;

	d = dest;
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
	char	*dest;

	if (argc == 3)
	{
		printf("Destiny string: %s\n", argv[1]);
		printf("Source string: %s\n", argv[2]);
		dest = ft_strcpy(argv[1], argv[2]);
		printf("Copied source string in destiny and stored in dest: %s\n", dest);
	}
	return (0);
}