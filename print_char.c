#include "main.h"

int print_char(va_list args, int lent)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	lent++;

	return (0);
}
