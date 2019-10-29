#include "holberton.h"
/**
 * prt_c- Print char
 * @valist: arguments
 * Return: 1 on success
 */
int prt_c(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (1);
}
