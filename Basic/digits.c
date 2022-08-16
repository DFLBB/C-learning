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

int	ft_digits(int num)
{
	int	c;

	c = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		c++;
		num /= 10;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int		num;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		printf("The number %d has %d digits\n", num, ft_digits(num));
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}