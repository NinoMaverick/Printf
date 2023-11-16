#include "main.h"
/**
 * print_i - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_i(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit, exp = 1;
	int  y = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		y++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			y++;
		}
	}
	_putchar(last + '0');

	return (y);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit;
	int  y = 1;
	int exp = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		y++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			y++;
		}
	}
	_putchar(last + '0');

	return (y);
}
