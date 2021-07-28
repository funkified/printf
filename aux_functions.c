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
 * puts_string -
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

char *convert(unsigned int num, int base)
{
	static char representation[] = "0123456789ABCDEF";
	static char buffer[1024];
	char *ptr;

	ptr = &buffer[39];
	*ptr = '\0';

	do
	{
		*--ptr = representation[num % base];
		num /= base;
	}
       	while (num != 0);

	return (ptr);
}

/**
int print_dec(va_list arg)
 	{
	unsigned int *nums;
	long int count = 0;

	nums = (unsigned int *) malloc(sizeof(va_arg(arg, unsigned int *)));
	if (*nums == '\0')
		return ('\0');
	while (nums[count] == '\0')
	{
		if (nums[count] == 0)
		{
			_putchar('0');
			count++;
		}
		else if (count < 0)
		{
			_putchar('-');
			count = -count;
			return (-1);
		}
		if (nums[count] > 0)
		{
			_putchar(count);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
*/
