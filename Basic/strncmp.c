#include <stdio.h>

unsigned int	ft_unsAtoi(char *num)
{
	int	c;
	int	aux;
	unsigned int	res;

	c = 0;
	aux = 0;
	res = 0;
	while (num[c] != '\0')
	{
		aux = num[c] - '0';
		res = (res * 10) + aux;
		c++;
	}
	return (res);
}

int	ft_strncmp(char *string1, char *string2, unsigned int num)
{
	unsigned int	c;

	c = 0;
	while ((string1[c] != '\0' || string2[c] != '\0') && c < num)
	{
		if (string1[c] == string2[c])
		c++;
		else
			return (string1[c] - string2[c]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	unsigned int	num;
	if (argc == 4)
	{
		num = ft_unsAtoi(argv[3]);
		printf("String1: %s\n", argv[1]);
		printf("String2: %s\n", argv[2]);
		printf("Difference between n characters of strings is: %d\n", ft_strncmp(argv[1], argv[2], num));
	}
	return (0);
}