#include "main.h"

/**
 * _printf - function name
 * @format: function parameter
 * Return: number char printer;
 */
int _printf(const char *format, ...)
{
	int lent = 0;
	int i = 0, j = 0;
	va_list args;
	format_t formats[] = {
		{'c', print_char}, {'%', print_per}, {'s', print_str},
		{'\0', NULL},
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (formats[j].format != '\0')
			{
				if (format[i] == formats[j].format)
					formats[j].func(args, lent);
				j++;
			}
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);

	return (lent);
}
