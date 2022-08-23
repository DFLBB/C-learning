#include <stdio.h>

void	value(int	var)
{
	var = 0;
	printf("Value in value function %d\n", var);
}

void	ref(int *var)
{
	*var = 5;
	printf("Value in ref function %d\n", *var);
}

int	main(void)
{
	int	var;
	int	*pvar;

	var = 20;
	pvar = &var;
	printf("Value in main function %d\n", var);
	value(var);
	printf("Value after value function %d\n", var);
	ref(pvar);
	printf("Value after ref function %d\n", var);
	return (0);
}