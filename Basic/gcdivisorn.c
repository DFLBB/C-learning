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

int	ft_gcdiv(int num1, int num2)
{
	int	c;
	int div;

	div = 1;
	while (num1 % 2 == 0 && num2 % 2 == 0)
	{
		num1 /= 2;
		num2 /= 2;
		div *= 2;
	}
	printf("div 2 %d\n", div);
	printf("num1 2 %d\n", num1);
	printf("num2 2 %d\n", num2);
	c = 3;
	while (num1 >= c && num2 >= c)
	{
		printf("c %d\n", c);
		if (num1 % c == 0 && num2 % c == 0)
		{
			div *= c;
			printf("div %d\n", div);
			printf("num1 %d\n", num1);
			printf("num2 %d\n", num2);
			num1 = num1 / c;
			num2 /= c;
			c = 1;
		}
		c += 2;
	}
	return (div);
}

int	main(int argc, char **argv)
{
	int	c;
	int gcd;
	
	if (argc > 2)
	{
		c = 2;
		gcd = ft_atoi(argv[1]);
		while (c < argc)
		{
			gcd = ft_gcdiv(gcd, ft_atoi(argv[c]));
			c++;
			printf("Middle GCD %d\n", gcd);
		}
		printf("GCD is: %d\n", gcd);
	}
	return (0);
}