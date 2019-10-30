![](https://www.holbertonschool.com/holberton-logo.png)

# A printf / Simple Implementation for a printf function


This is a project that implements the printf() function in the C library that simply print or display its arguments on the sreen. In the most simple case, **printf** takes one argument, a string of characters to be printed. This string is composed of characters, each of which is printed exactly as i appears.



When using printf (instead of sprintf/snprintf) you have to provide our own `_putchar()` low level function as console/serial output.


## Usage

This project is based on structure and function pointer use

Usage is 1:1 like the according holberton.h library version:
```C
int (*filler(char cha))(va_list);
int prt_c(va_list);
int prt_s(va_list);
int prt_perc(va_list);
int prt_i(va_list);
int count_integer(long i);
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
```




### Supported Types

| Type   | Output |
|--------|--------|
| c      | Single character |
| s      | String of characters |
| %      | A % followed by another % character will write a single % |
| d or i | Signed decimal integer |
| b      | Unsigned binary |
| u      | Unsigned decimal integer	|
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |

### Alternately Special Characters
| Special | meaning |
|--------|-------------|
| \a | audible alert (bell) |
| \b | backspace |
| \f | form feed |
| \n | newline (linefeed) |
| \r | carriage return |
| \t | tab |
| \v | vertical tab |
