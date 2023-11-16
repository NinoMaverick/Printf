#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_oct(va_list val)
{
	int y;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (y = 0; y < counter; y++)
	{
		array[y] = tem % 8;
		tem /= 8;
	}
	for (y = counter - 1; y >= 0; y--)
	{
		_putchar(array[y] + '0');
	}
	free(array);
	return (counter);
}
