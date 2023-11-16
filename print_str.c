#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);

}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int b;

	for (b = 0; s[b] != 0; b++)
		;
	return (b);
}
