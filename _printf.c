#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int y = 0, m, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[y] != '\0')
	{
		m = 13;
		while (m >= 0)
		{
			if (p[m].ph[0] == format[y] && p[m].ph[1] == format[y + 1])
			{
				length += p[m].function(args);
				y = y + 2;
				goto Here;
			}
			m--;
		}
		_putchar(format[y]);
		length++;
		y++;
	}
	va_end(args);
	return (length);
}
