#include <stdio.h>

int	ft_strcmp(char *string1, char *string2)
{
	while ((*string1 != '\0') && (*string2 != '\0') && (*string1 == *string2))
	{
		string1++;
		string2++;
	}
	return ((unsigned char)*string1 - (unsigned char)*string2);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("String1: %s\n", argv[1]);
		printf("String2: %s\n", argv[2]);
		printf("Difference between strings is: %d\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}