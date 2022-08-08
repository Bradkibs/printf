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
			count += val_check(format, args);
			format++;
			state = 0;
		}
	}
	return (count);
}

/**
 * val_check - checks the value preceding % sign
 *@format: a pointer to a character string
 *@count: the number of arguments printed
 * Return: the number of character it prints
 */
int val_check(const char *format, va_list ap)
{
	int i = 0;
	char c;
	char *s;

	switch (*format)
	{
		case 'c':
			c = va_arg(ap, int);
			_putchar(c);
			i++;
			break;
		case 's':
			s = va_arg(ap, char *);
			while (*s)
			{
				_putchar(*s);
				i++;
				s++;
			}
			break;
		case '%':
			_putchar('%');
			break;
	}
	return (i);
}
