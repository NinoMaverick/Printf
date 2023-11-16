#include "main.h"
/**
 * _printf - print out count
 *
 * @format: specifies the format
 * Return: returns the numbers of printed characters
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;

		va_list all;

	va_start(all, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				char character = va_arg(all, int);

				_ninoprint(character);
				i++;
			}
			else if (*format == 's')
			{	char *str = va_arg(all, char *);

				while (*str != '\0')
				{
					_ninoprint(*str);
					str++;
					i++;
				}
			}
			else if (*format == '%')
			{	_ninoprint('%');
				i++;
			}
			else if (*format == 'd')
			{
				int number = va_arg(all, int);
				_ninoprint(number);
				i += _ninoprint(number);
			}
			else if (*format == 'i')
			{
				int numeral = va_arg(all, int);
				_ninoprint(numeral);
				i++;
			}
		}
		else
		{
			_ninoprint(*format);
			i++;
		}
		format++;
	}
	va_end(all);
	return (i);
}
