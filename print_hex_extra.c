#include "main.h"

/**
 * print_hex_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_extra(unsigned long int num)
{
	long int y;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (y = 0; y < counter; y++)
	{
		array[y] = temp % 16;
		temp = temp / 16;
	}
	for (y = counter - 1; y >= 0; y--)
	{
		if (array[y] > 9)
			array[y] = array[y] + 39;
		_putchar(array[y] + '0');
	}
	free(array);
	return (counter);
}
