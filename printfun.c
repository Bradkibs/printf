#include "main.h"

/**
 * _printf - prints to the stdout
 * @format: pointer to the character string
 * Return: number of characters printed to stdout
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, format);
	i =_vprintf(format, ap);
	va_end(ap);
	return (i);
}
