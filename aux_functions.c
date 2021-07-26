#include "holberton.h"

/*/
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int);
	return (_putchar(c));
}

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/*
 */
int puts_string(char *s)
{
	return (write(1, s, _strlen(s)));
}

/*
 */
int print_string(va_list arg)
{
	char *str;

	str = (char *)va_arg(arg, char *);

	return (puts_string(str));
}

char *convert(unsigned int num, int base)
{
	static char representation[] = "0123456789ABCDEF";
	static char buffer[100];
	char *ptr;

	ptr = &buffer[99];
	*ptr = '\0';

	do
	{
		*--ptr = representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/*int print_dec(va_list arg)
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
}*/
