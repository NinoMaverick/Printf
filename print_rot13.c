#include "main.h"
/**
 * print_rot13 - convert to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int print_rot13(va_list args)
{
	int y, m, counter = 0;
	int e = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (y = 0; s[y]; y++)
	{
		e = 0;
		for (m = 0; al[m] && !e; m++)
		{
			if (s[y] == al[m])
			{
				_putchar(bl[m]);
				counter++;
				e = 1;
			}
		}
		if (!e)
		{
			_putchar(s[y]);
			counter++;
		}
	}
	return (counter);
}
