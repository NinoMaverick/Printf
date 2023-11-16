#include "main.h"
/**
 * print_exc_string - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_string(va_list val)
{
	char *s;
	int y, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] < 32 || s[y] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[y];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[y]);
			length++;
		}
	}
	return (length);
}
