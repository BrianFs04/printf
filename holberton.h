#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printFormats - structure
 * @a: indicator
 * @f: function to pointer
 */

typedef struct printFormats
{
	char *a; /*Indicator*/
	int (*f)(va_list);
} formatSpe;

int (*filler(char cha))(va_list);
int prt_c(va_list);
int prt_s(va_list);
int prt_perc(va_list);
int prt_i(va_list);
int count_integer(long i);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);

#endif /* PRINTF_H */
