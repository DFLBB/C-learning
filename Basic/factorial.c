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

double	ft_fact(int num)
{
	double	fact;

	fact = 1;
	if (num == 1 || num == 0)
		fact = 1;
	while (num > 1)
	{
		fact = fact * num;
		num--;
	}
	return (fact);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("El factorial de %s es %f\n", argv[1], ft_fact(ft_atoi(argv[1])));
	}
}