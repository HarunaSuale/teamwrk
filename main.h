#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct format_s
{
	char format;
	int (*func)(va_list, int);
} format_t;

int _printf(const char *format, ...);
int print_str(va_list args, int lent);
int print_char(va_list args, int lent);
int print_per(va_list args, int lent);

#endif
