#include <stdio.h>

int	ft_maxLength(char **argv)
{
	int	c;
	int	i;
	int	res;

	c = 1;
	i = 0;
	res = 0;
	while (argv[c])
	{
		while (argv[c][i] != '\0')
			i++;
		if (i > res)
			res = i;
		c++;
		i = 0;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("Max length of argv strings is %d\n", ft_maxLength(argv));
	return (0);
}