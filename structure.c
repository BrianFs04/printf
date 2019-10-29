#include "holberton.h"

/**
 * filler - filler structure
 * @cha: characters to receive
 * Return: Null if does not use a special
 */
int (*filler(char cha))(va_list valist)
{
	unsigned int i = 0;
	formatSpe data[] = {
		{"c", prt_c}, {"s", prt_s}, {"%", prt_perc},
		{"i", prt_i}, {"d", prt_i},
		{NULL, NULL}
	};

	while (data[i].a != NULL)
	{
		if (cha == data[i].a[0])
			return (data[i].f);
		i++;
	}
	return (NULL);
}
