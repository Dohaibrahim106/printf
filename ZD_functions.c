#include "main.h"
/**
 * _ZD_my_putchar - function prints character.
 * @c: parameter is character
 * Return: len
 */
int _ZD_putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * _ZD_putstr - print string.
 * @s: parameter is string
 * Return: len.
 */
int _ZD_putstr(char *s)
{
return (write(1, s, strlen(s)));
}
/**
 * _ZD_putint - print integer
 * @n: number to be printed
 * return : return void
 */
void _ZD_putint(int n)
{
unsigned int n1;
if (n < 0)
{
n1 = -n;
_ZD_putchar('-');
}
else
n1 = n;
if (n1 / 10)
_ZD_putint(n1 / 10);
_ZD_putchar((n1 % 10) + '0');
}
/**
 * _num_length - return the number len
 * @n: number to be printed
 * Return: len.
 */
int _num_length(int n)
{
int len = 1;
if (n < 0)
len++;
while (n /= 10)
len++;
return (len);
}
/**
 * _check - print argument
 * @c: the string format
 * @args: the variable arguments
 * Return: len.
 */
int _check(char c, va_list args)
{
int num, len = 0;
char *str;
switch (c)
{
		case 'c':
			len += _ZD_putchar(va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			len += _ZD_putstr(STRING);
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			_ZD_putint(num);
			len += _num_length(num);
			break;
		case 'b':
			len += _myprint_binary(va_arg(args, unsigned int));
			break;
		case '%':
			len += _ZD_putchar('%');
			break;
		default:
			len += _ZD_putchar('%');
			len += _ZD_putchar(c);
			break;
	}
	return (len);
}
