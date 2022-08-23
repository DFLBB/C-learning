#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *num)
{
	int	c;
	int	aux;
	int	res;
	int sign;

	c = 0;
	aux = 0;
	sign = 1;
	res = 0;
	if (num[0] == 45)
	{
		sign = -1;
		c++;
	}
	while (num[c] != '\0')
	{
		aux = num[c] - '0';
		res = (res * 10) + aux;
		c++;
	}
	return (res * sign);
}

int	*ft_mallocInt(int argc, char **argv)
{
	int	*new;
	int	c;

	c = 0;
	new = (int *)malloc(sizeof(*new) * (argc - 1));
	if (!(new ))
		return (NULL);
	while (c + 1 < argc)
	{
		new[c] = ft_atoi(argv[c + 1]);
		c++;
	}
	return (new);
}

int	main(int argc, char **argv)
{
	int c;
	int *numbers;
	
	if (argc > 2)
	{
		c = 0;
		numbers = ft_mallocInt(argc, argv);
		while (c + 1 < argc)
		{
			printf("Numbers[%d] is: %d\n", c, numbers[c]);
			c++;
		}
	}
	printf("numbers[2] - numbers[0] es %d\n", numbers[2] - numbers[0]);
	free (numbers);
	return (0);
}