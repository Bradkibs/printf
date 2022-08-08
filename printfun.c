#include "main.h"

/**
 * _printf - prints to the stdout
 * @format: pointer to the character string
 * Return: 0 when succesful
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	return (_vprintf(format, ap));
	va_end(ap);

}
