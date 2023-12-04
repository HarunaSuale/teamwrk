#include "main.h"

/**
 * _printf - function name
 * @format: function parameter
 * Return: number char printer;
 */
int _printf(const char *format, ...)
{
	int lent = 0;
	int i = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
			lent++;
		}

		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{				
				write(1, format, 1);
				lent++;
			}
			else if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				lent++;
			}
			else if (format[i] == 's')
			{
				char *str;
				str = va_arg(args, char*);

				while (*str)
				{
					write(1, str, 1);
					lent++;
					str++;
				}
			}
		}
		i++;
	}
	va-end(args);

	return (lent);
}
