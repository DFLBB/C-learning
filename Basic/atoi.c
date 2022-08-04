#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *num)
{
	int	c;
	int	aux;
	int	res;
	int sign;

	c = 0;
	aux = 0;
	sign = 1;
	//if (num[0] == "-")
	if (num[0] == 45)
	{
		sign = -1;
		write (1, &sign, 1);
		c++;
	}
	while (num[c] != '\0')
	{
		aux = num[c] - '0';
		write (1, &num[c], 1);
		res = (res * 10) + aux;
		c++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	div;

	if (argc == 3)// && argv[2] != "0")
	//if (argc == 3 && argv[2] != 48)
	{
		num1 = ft_atoi(argv[1]);
		printf("num1 %d\n", num1);
		printf("atoi num1 %d\n", atoi(argv[1]));
		num2 = ft_atoi(argv[2]);
		printf("num2 %d\n", num2);
		printf("atoi num2 %d\n", atoi(argv[2]));
		if (num2 != 0)
		{
			div = num1 / num2;
			printf("Division %d\n", div);
		}
	}
	return (0);
}