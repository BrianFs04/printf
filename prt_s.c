#include "holberton.h"
/**
 * prt_s - function prints a string
 * @valist: arguments
 * Return: The length
 */
int prt_s(va_list valist)
{
	unsigned int i = 0;
	char *str = va_arg(valist, char*);

	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
