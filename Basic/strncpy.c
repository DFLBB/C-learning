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
		res = (res * 10) + aux;
		c++;
	}
	return (res * sign);
}

char	*ft_strncpy(char *dest, const char *src, int num)
{
	char	*d;
	int		c;

	d = dest;
	c = 0;
	while (*src != '\0' && c < num)
	{
		*d = *src;
		d++;
		src++;
		c++;
	}
	*d = '\0';
	while (c < num)
	{
		d++;
		*d = '\0';
		c++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	char	*dest;
	int		num;

	num = ft_atoi(argv[3]);
	if (argc == 4 && num > 0)
	{
		printf("Destiny string: %s\n", argv[1]);
		printf("Source string: %s\n", argv[2]);
		printf("Number of characters: %d\n", num);
		dest = ft_strncpy(argv[1], argv[2], num);
		printf("Copied n chars of src in dest and stored: %s\n", dest);
	}
	return (0);
}