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
 *@ap: a pointer of type va_list used to iterate through the extra params
 * Return: the number of character it print
 */
int val_check(const char *format, va_list ap)
{
	int d, l, i = 0, k = 0;
	char c, buf[28];
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
			i++;
			break;
		case 'd':
			d = va_arg(ap, int);
			num_to_str(d, 10, buf);
			for (k = 0; buf[k]; k++)
			{
				_putchar(buf[k]);
				i++;
			}
			break;
		case 'i':
			l = va_arg(ap, int);
			num_to_str(l, 10, buf);
			for (k = 0; buf[k]; k++)
			{
				_putchar(buf[k]);
				i++;
			}
			break;
	}
	return (i);
}
