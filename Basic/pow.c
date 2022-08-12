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

double	ft_pow(int num, int pow)
{
	int		c;
	double	res;

	c = 0;
	res = 1;
	if (pow == 0)
		res = 1;
	else if (num == 0)
		res = 0;
	else
	{
		while (c < pow)
		{
			res = res * num;
			c++;
		}
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int		num;
	int		pow;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 3)
	{
		num = ft_atoi(argv[1]);
		pow = ft_atoi(argv[2]);
		printf("The number %d raised to %d is %.0f\n", num, pow, ft_pow(num, pow));
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}