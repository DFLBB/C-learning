#include <stdio.h>
#include <time.h>

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

int	ft_isPalindrome(int num)
{
	int		first;
	int		last;
	int		c;
	int		i;
	double	pow;

	c = 0;
	i = 0;
	pow = 1;
	first = num;
	while (first != 0)
	{
		c++;
		pow *= 10;
		first /= 10;
	}
	pow /= 10;
	while (i <= c / 2)
	{
		first = num / pow;
		last = num % 10;
		if (first == last)
		{
			num = num - (first * pow);
			num = num / 10;
			pow /= 100;
			i += 2;
		}
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		num;
	double	time_spent = 0.0;
	
	clock_t begin = clock();
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (ft_isPalindrome(num))
			printf("The number %d is a Palindrome\n", num);
		else
			printf("The number %d is NOT a Palindrome\n", num);
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
	return (0);
}