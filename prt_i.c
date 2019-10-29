#include "holberton.h"
/**
 * prt_i - function that prints a string
 * @valist: args to be printed
 * Return: The length
 */
int prt_i(va_list valist)
{
	long i = va_arg(valist, int);
	int lon = 0;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		lon++;
	}
	lon += count_integer(i);
	return (lon);

}
/**
 * count_integer - function that counts a string
 * @i: number to be printed
 * Return: The length
 */
int count_integer(long i)
{
	int lon = 0;

	if (i / 10 != 0)
	{
		lon += count_integer(i / 10);
	}
	lon += _putchar((i % 10) + '0');
	return (lon);
}
