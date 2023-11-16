#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_HEX(va_list val)
{
	int y;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (y = 0; y < counter; y++)
	{
		array[y] = tem % 16;
		tem /= 16;
	}
	for (y = counter - 1; y >= 0; y--)
	{
		if (array[y] > 9)
			array[y] = array[y] + 7;
		_putchar(array[y] + '0');
	}
	free(array);
	return (counter);
}
