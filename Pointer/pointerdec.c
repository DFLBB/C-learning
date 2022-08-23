#include <stdio.h>

int	main(void)
{
	int		var;
	int		*ptr;
	char	*str = "Hola";
	char	*pstr;

	var = 20;
	ptr = &var;
	pstr = str;
	printf("var %d\n", var);
	printf("Address of var %p\n", &var);
	printf("Address of ptr %p\n", &ptr);
	printf("ptr %n\n", ptr);
	printf("\n");
	printf("*ptr %d\n", *ptr);
	printf("str %s\n", str);
	printf("Address of str %p\n", &str);
	printf("Address of pstr %p\n", &pstr);
	printf("pstr %s\n", pstr);
	printf("*pstr %d", *pstr);
	return (0);
}