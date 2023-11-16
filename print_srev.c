#include "main.h"

/**
 * print_revs - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int y;
	int m = 0;

	if (s == NULL)
		s = "(null)";
	while (s[m] != '\0')
		m++;
	for (y = m - 1; y >= 0; y--)
		_putchar(s[y]);
	return (m);
}
