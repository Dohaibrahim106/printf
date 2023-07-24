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
int _zd_putchar(char c);
int _zd_putstr(char *s);
void _zd_putint(int n);
int _length_num(int n);
int _zd_check(char c, va_list args);
int _zd_printbin(unsigned int n);
int _printf_unsigned(va_list args);
int _myprintf_oct(va_list val);
int _print_hex(va_list val);
int _print_hex_aux(unsigned long int num);
int _myprintf_HEX(va_list val);
int _printf_HEX_aux(unsigned int num);

#endif
