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
		//write (1, &num[c], 1);
		//write (1, "\n", 1);
		res = (res * 10) + aux;
		c++;
	}
	return (res * sign);
}

void	ft_for(int times)
{
	if (times > 0)
	{
		//for (inicialize; condition; increment)
		for (int i = 1; i <= times; i++)
			printf("Impresion for %d\n", i);
	}
}

void	ft_while(int times)
{
	if (times >0)
	{
		//while (condition)
		int	i;

		i = 1;
		while (i <= times)
		{
			printf("Impresion while %d\n", i);
			i++;
		}
	}
}

void	ft_dowhile(int times)
{
	if (times > 0)
	{
		//do { statement
		//} while (condition)
		int	i;

		i = 1;
		do
		{
			printf("Impresion dowhile %d\n", i);
			i++;
		} while (i <= times);
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_for(ft_atoi(argv[1]));
	if (argc > 2)
		ft_while(ft_atoi(argv[2]));
	if (argc == 4)
		ft_dowhile(ft_atoi(argv[3]));
	return (0);
}