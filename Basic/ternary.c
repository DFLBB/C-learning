#include <stdio.h>
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

int	main(int argc, char **argv)
{
	int		max;
	int		aux1;
	int		aux2;
	int		aux3;

	aux1 = ft_atoi(argv[1]);
	printf("aux1: %d\n", aux1);
	aux2 = ft_atoi(argv[2]);
	printf("aux2: %d\n", aux2);
	aux3 = ft_atoi(argv[3]);
	printf("aux3: %d\n", aux3);
	if (argc == 4)
	{
		max = aux1 > aux2 ? aux1 > aux3 ? aux1 : aux3 : aux2 > aux3 ? aux2 : aux3;
		printf("El máximo es: %d\n", max);
	}
	return (0);
}