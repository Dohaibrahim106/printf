#include "main.h"
/**
 * _zd_putchar - function prints character.
 * @c: parameter is character
 * Return: len
 */
int _zd_putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * _zd_putstr - print string.
 * @s: parameter is string
 * Return: len.
 */
int _zd_putstr(char *s)
{
return (write(1, s, strlen(s)));
}
/**
 * _zd_putint - print integer
 * @n: number to be printed
 * return : return void
 */
void _zd_putint(int n)
{
unsigned int n1;
if (n < 0)
{
n1 = -n;
_zd_putchar('-');
}
else
n1 = n;
if (n1 / 10)
_zd_putint(n1 / 10);
_zd_putchar((n1 % 10) + '0');
}
/**
 * _length_num - return the number len
 * @n: number to be printed
 * Return: len.
 */
int _length_num(int n)
{
int len = 1;
if (n < 0)
len++;
while (n /= 10)
len++;
return (len);
}
/**
 * _zd_check - print argument
 * @c: the string format
 * @args: the variable arguments
 * Return: len.
 */
int _zd_check(char c, va_list args)
{
int num, len = 0;
char *str;
switch (c)
{
		case 'c':
			len += _zd_putchar(va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			len += _zd_putstr(STRING);
			break;
		case 'd':
		case 'i':
			num = va_arg(args, int);
			_zd_putint(num);
			len += _length_num(num);
			break;
		case 'b':
			len += _zd_printbin(va_arg(args, unsigned int));
			break;
		case '%':
			len += _zd_putchar('%');
			break;
		default:
			len += _zd_putchar('%');
			len += _zd_putchar(c);
			break;
	}
	return (len);
}
