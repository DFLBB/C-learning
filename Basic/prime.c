#include <stdio.h>
#include <time.h>

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

int	ft_prime(int num)
{
	int	c;

	c = 3;
	if (num == 0 || num == 1)
		return (1);
	else if (num > 2 && num % 2 == 0)
		return (1);
	else
	{
		while (num / c >= 3)
		{
			if (num % c == 0)
				return (1);
			c += 2;
			while (c > 7 && (c % 3 == 0 || c % 5 == 0 || c % 7 == 0))
				c += 2;
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		num;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (ft_prime(num) == 0)
			printf("El nº %d es primo\n", num);
		else
			printf("El nº %d NO es primo\n", num);
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}