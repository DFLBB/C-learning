#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		c;
	int		i;
	char	aux;
	char	str[20];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	c = 0;
	i = 0;
	aux = argc + '0';
	write (1, &aux,1);
	write (1, "\n", 1);
	while (c < argc)
	{
		while (argv[c][i] != '\0')
		{
			write (1, &argv[c][i], 1);
			i++;
		}
		write (1, "\n", 1);
		c++;
		i = 0;
	}
	i = 0;
	c = 0;
	printf("initial str %s\n", str);
	while (argv[1][c] != 0)
		c++;
	c--;
	while (argv[1][i] != 0)
	{
		str[c] = argv[1][i];
		i++;
		c--;
	}
	printf("final str %s\n", str);
	return (0);
}