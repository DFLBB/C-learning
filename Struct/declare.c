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

int	main(int argc, char **argv)
{
	int		c;
	int		i;
	struct Employee
	{
		int		id;
		char	*name;
		char	*lastname;
		int		level;
	};
	
	c = 0;
	i = 0;
	struct Employee employees[5];
	while (c < 5 && i <= argc)
	{
		employees[c].id = ft_atoi(argv[++i]);
		employees[c].name = argv[++i];
		employees[c].lastname = argv[++i];
		employees[c].level = ft_atoi(argv[++i]);
		c++;
	}
	i = 0;
	while (i < c)
	{
		printf("Id employee: %d, ", employees[i].id);
		printf("Name: %s, ", employees[i].name);
		printf("Lastname: %s, ", employees[i].lastname);
		printf("Level: %d\n", employees[i].level);
		i++;
	}
}

//a.exe 1 Juan Perez 2 2 Ana Torres 5 3 Alvaro Lopez 2 4 Angela Angulez 3 5 Alba motos 4