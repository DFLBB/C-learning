#include <stdlib.h>
#include <stdio.h>

int	ft_maxLength(char **argv)
{
	int	c;
	int	i;
	int	res;

	c = 1;
	i = 0;
	res = 0;
	while (argv[c])
	{
		while (argv[c][i] != '\0')
		{
			if (i > res)
				res = i;
			i++;
		}
		c++;
	}
	return (res);
}

char	**ft_mallocInt2D(int argc, char **argv)
{
	int		i;
	int		j;
	int		c;
	char	**array;
	int		length;

	i = -1;
	j = -1;
	length = ft_maxLength(argv) + 1;
	array = (char **)malloc((argc - 1) * sizeof(char*));
	while (++i < (argc))
		array[i] = (char*)malloc(length * sizeof(char)); 
	if (!(array))
		return (NULL);
	c = 1;
	i = 0;
	while (c < (argc))
	{
		while (argv[c][++j] != '\0')
			array[i][j] = argv[c][j];
		array[i][j] = '\0';
		i++;
		c++;
		j = -1;
	}
	return (array);
}

int	main(int argc, char **argv)
{
	int 	i;
	char	**words;
	
	if (argc > 1)
	{
		i = 0;
		words = ft_mallocInt2D(argc, argv);
		printf("Str array is:\n");
		while (i < (argc - 1))
		{
			printf("%s\n", words[i]);
			i++;
		}
	}
	free (words);
	return (0);
}