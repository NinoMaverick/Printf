#include "main.h"

/**
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int c;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (c = 0; s[c] != '\0'; c++)
		{
			_putchar(s[c]);
		}
		return (c);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}
