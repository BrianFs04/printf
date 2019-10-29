#include "holberton.h"

/**
 * _printf - function that imitates a printf
 * @format: is a character string
 * Return: the print
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int (*p)(va_list);
	va_list valist;
	int sum;

	i = 0;
	sum = -1;
	va_start(valist, format);

	if (format != NULL)
	{
		sum = 0;
		while (format && format[i])
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
			}
			else if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			else if (format[i] == '%' && format[i + 1] != '\0')
			{
				p = filler(format[i + 1]);
				if (p != NULL)
				{
					sum += p(valist) - 1;
					i++;
				}
				else
				{
					_putchar(format[i]);
				}
			}
			i++;
			sum++;
		}
	}
	va_end(valist);
	return (sum);
}
