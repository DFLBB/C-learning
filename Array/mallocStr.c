#include <stdlib.h>
#include <stdio.h>

char	*ft_mallocChar(char *src)
{
	char	*new;
	int		i;
	int		c;

	c = 0;
	while (src[c])
		++c;
	new = malloc(sizeof(*new) * (c + 1));
	if (!(new))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main(int argc, char **argv)
{
	char *str;
	
	if (argc == 2)
	{
		str = ft_mallocChar(argv[1]);
		printf("String is: %s\n", str);
	}
	free (str);
	return (0);
}