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
	printf("num: %s\n", num);
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

int	main(int argc, char **argv)
{
	int c;
	int numbers[10];
	
	if (argc > 2)
	{
		c = 0;
		while (c + 1 < argc)
		{
			numbers[c] = ft_atoi(argv[c + 1]);
			c++;
		}
		c = 0;
		while (c + 1 < argc)
		{
			printf("Numbers[%d] is: %d\n", c, numbers[c]);
			c++;
		}
	}
	return (0);
}