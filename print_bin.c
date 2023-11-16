#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int y, e = 1, m;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (y = 0; y < 32; y++)
	{
		p = ((e << (31 - y)) & num);
		if (p >> (31 - y))
			flag = 1;
		if (flag)
		{
			m = p >> (31 - y);
			_putchar(m + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
