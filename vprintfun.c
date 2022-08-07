#include "main.h"

/**
 * _vprintf - prints using format specifiers
 * @format: a pointer to an array of input to be printed
 * Return:nothing
 */
void _vprintf(const char *format, va_list args)
{
	int state = 0;

	char c;

	char *s;


	while (*format != '\0')
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				format++;
				state = 1;
			}
			else
			{
				write(0, format, sizeof(char));
				format++;
			}
		}
		if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s)
					{
						_putchar(*s);
						s++;
					}
					break;
			}
			format++;
			state = 0;
		}
	}
}
