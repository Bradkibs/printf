#include "main.h"

/**
 * _vprintf - prints using format specifiers
 * @format: a pointer to an array of input to be printed
 * @args: arguments passed
 * Return: the number of characters printed
 */
int _vprintf(const char *format, va_list args)
{
	int state = 0;
	char c;
	char *s;
	int count = 0;

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
				count++;
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
					count++;
					break;
				case 's':
					s = va_arg(args, char *);
					while (*s)
					{
						_putchar(*s);
						count++;
						s++;
					}
					break;
			}
			format++;
			state = 0;
		}
	}
	return (count);
}
