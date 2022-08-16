#include <stdlib.h>
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

int	**ft_mallocInt2D(char **argv)
{
	int	i;
	int	j;
	int	c;
	int	**array;
	int	num[2];

	i = 0;
	j = 0;
	num[0] = ft_atoi(argv[1]);
	num[1] = ft_atoi(argv[2]);
	array = (int **)malloc(num[0] * sizeof(int*));
	while (i < num[0])
	{
		array[i] = (int*)malloc(num[1] * sizeof(int)); 
		i++;
	}
	if (!(array))
	{
		printf("Malloc error\n");
		return (NULL);
	}
	c = 3;
	i = 0;
	while (i < num[0])
	{
		while (j < num[1])
		{
			array[i][j] = ft_atoi(argv[c]);
			c++;
			j++;
		}
		i++;
		j = 0;
	}
	return (array);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int	nl;
	int	nc;
	int **numbers;
	
	if (argc > 2)
	{
		nl = ft_atoi(argv[1]);
		nc = ft_atoi(argv[2]);
		i = 0;
		j = 0;
		numbers = ft_mallocInt2D(argv);
		printf("Int array is:\n");
		while (i < nl)
		{
			while (j < nc)
			{
				printf("% 4d ", numbers[i][j]);
				j++;
			}
			printf("\n");
			i++;
			j = 0;
		}
	}
	free (numbers);
	return (0);
}