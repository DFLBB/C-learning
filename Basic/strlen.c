#include <stdio.h>

size_t	ft_strlen(char *argv)
{
	size_t	res;

	res = 0;
	while (argv[res] != '\0')
		res++;
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("Length of argv[1] string is %I64d\n", ft_strlen(argv[1]));
	return (0);
}