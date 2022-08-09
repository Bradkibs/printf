#include "main.h"
/**
 * u_num_to_str - converts numbers to string
 * @num: the number to be converted to str
 * @buffer: a 
 * Return: nothing
 */
void u_num_to_str(uint64_t num, int base, char *buffer)
{
	int i, j, digit, cur = 0;
	char buf[65];

	if (num == 0)
	{
		*buffer = '0';
		return;
	}
	for (i = 0; i < 65; i++)
		buf[i] = 0;
	while (num)
	{
		digit = num % base;
		if (digit >= 10)
			buf[cur++] = 'a' + (digit - 10);
		else
			buf[cur++] = '0' + digit;
		num /= base;
	}
	for (j = cur - 1; j != 0; j--)
		*buffer++ = buf[j];
	*buffer = buf[0];
	*buffer = '\0';
}
void num_to_str(int64_t num, int base, char *buffer)
{
	if (num < 0)
	{
		*buffer++ = '-';
		num = -num;
	}
	u_num_to_str(num, base, buffer);
}
