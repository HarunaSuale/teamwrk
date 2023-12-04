#include "main.h"

int print_str(va_list args, int lent)
{
	char *str;

	str = va_arg(args, char *);
	while (*str)
	{
		write(1, str, 1);
		lent++;
		str++;
	}

	return (0);
}
