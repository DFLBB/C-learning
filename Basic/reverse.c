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

double	ft_reverse(int num)
{
	double	rev;
	int		sign;

	rev = 0;
	sign = 1;
	if (num == -2147483648)
		rev = -8463847412;
	else 
	{
		if (num < 0)
		{
			sign *= -1;
			num *= -1;
		}
		while (num > 0)
		{
			rev = (rev * 10) + (num % 10);
			num /= 10;
		}
	}
	return (rev * sign);
}

int	main(int argc, char **argv)
{
	int		num;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		printf("The reverse of %d is %.0f\n", num, ft_reverse(num));
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}