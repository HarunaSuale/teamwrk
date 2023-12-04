#include "main.h"

int print_per(va_list __attribute__((unused))args, int lent)
{
	char *str = "%";

	write(1, str, 1);
	lent++;

	return (0);
}
