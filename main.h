#ifndef MAIN_H
#define MAIN_H
/* Start import the lib*/
<<<<<<< HEAD
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
>>>>>>> f280e004677eab0998477304a90ab186735e67bd
/* Define STRING */
#define STRING ((str) ? str : "(null)")
/* Create the functions  */
int _printf(const char *format, ...);
<<<<<<< HEAD
int _ZD_putchar(char c);
int _ZD_putstr(char *s);
void _ZD_putint(int n);
int _ZD_length_num(int n);
int _ZD_check(char c, va_list args);
int _ZD_printbinary(unsigned int n);
int _ZD_printf_unsigned(va_list args);
int _ZD_printf_oct(va_list val);
int _ZD_print_hex(va_list val);
int _ZD_print_hex_aux(unsigned long int num);
int _ZD_printf_HEX(va_list val);
int _ZD_printf_HEX_aux(unsigned int num);
=======
int _my_putchar(char c);
int _my_putstr(char *s);
void _my_putint(int n);
int _num_length(int n);
int _check(char c, va_list args);
int _myprint_binary(unsigned int n);
int _printf_unsigned(va_list args);
int _myprintf_oct(va_list val);
int _print_hex(va_list val);
int _print_hex_aux(unsigned long int num);
int _myprintf_HEX(va_list val);
int _printf_HEX_aux(unsigned int num);


>>>>>>> f280e004677eab0998477304a90ab186735e67bd

#endif
