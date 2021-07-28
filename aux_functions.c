#include "holberton.h"

/**
 * print_char - prints a single character
 * @arg: contains arguments
 * Return: a character
 */
int print_char(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int);
	return (_putchar(c));
}

/**
 * _strlen -
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i + 1);
}

/**
 * puts_string - print string
 * @s: string
 * Return: 0
 */
int puts_string(char *s)
{
	return (write(1, s, _strlen(s)));
}

/**
 * print_string - Handles printing a string as a va_list
 * @arg: holds the argument to print
 * Return: Ammount of chars printed, -1 if not
 */
int print_string(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);
	if (*str == '\0')
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * convert - convert a number into any base
 * @num: number
 * @base: base
 * Return: number
*/
char *convert(unsigned int num, int base)
{
	char representation[] = "0123456789ABCDEF";
	char buffer[1024];
	char *ptr;

	ptr = &buffer[39];
	*ptr = '\0';

	do {
		*--ptr = representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
