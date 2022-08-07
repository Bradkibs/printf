#include "main.h"

/**
 * printf -
 * @format:
 * Return:
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	_vprintf(format, ap);
	va_end(ap);
	return (0);

}
