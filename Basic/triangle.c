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

void	ft_printTriangle(int num, char *symbol)
{
	int	aux;
	int	c;

	aux = 1;
	c = 1;
	while (aux <= num)
	{
		while (c <= aux)
		{
			printf("%5s", symbol);
			c++;
		}
		printf("\n");
		aux++;
		c = 1;
	}
}

int	main(int argc, char **argv)
{
	int		num;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 3)
	{
		num = ft_atoi(argv[1]);
		ft_printTriangle(num, argv[2]);
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}