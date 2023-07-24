ايه
انا روحت
وغيرت
ولسه قاعده اهو
اى
اى جه
انته يا واد
انته استحليت الضلمه ولا اى
https://github.com/Saraali24
#include <stdarg.h>  // for va_list, va_start, va_arg, va_end
#include <unistd.h>  // for write

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: the number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - produces output according to a format
 * @format: a character string containing zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				len += _putchar(va_arg(args, int));
			else if (*format == 's')
				len += write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
			else if (*format == '%')
				len += _putchar('%');
			else
			{
				len += _putchar('%');
				len += _putchar(*format);
			}
		}
		else
			len += _putchar(*format);
		format++;
	}

	va_end(args);
	return (len);
}
#ifndef MAIN_H
#define MAIN_H
/* Start import the lib*/
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/* Define STRING */
#define STRING ((str) ? str : "(null)")
/* Create the functions  */
int _printf(const char *format, ...);
int _ZD_putchar(char c);
int _ZD_putstr(char *s);
void _ZD_putint(int n);
int _length_num(int n);
int _ZD_check(char c, va_list args);
int _ZD_printbinary(unsigned int n);
int _printf_unsigned(va_list args);
int _myprintf_oct(va_list val);
int _print_hex(va_list val);
int _print_hex_aux(unsigned long int num);
int _myprintf_HEX(va_list val);
int _printf_HEX_aux(unsigned int num);

#endif
