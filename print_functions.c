#include "holberton.h"

/**
 * _puts - recreates puts function without new line
 * @s: pointer to string
 * Return: output with no new line at EOF
 */
int _puts(char const *s)
{
	size_t i;

	for (i = 0; s[i]; i++)

		if (_putchar(s[i]) == EOF)
		{
			return (EOF);
		}
	return (0);
}

long int print_dec(va_list arg)
{
	long int i;
	long int count = 0;


	i = va_arg(arg, int);
	if (i == 0)
	{
		putchar('0');
		count++;
	}
	while (i >= 0)
	{
		_puts(convert(i, 10));
		i++;
		count++;
	}
	if (i < 0)
	{
		_putchar('-');
		count++;
	}
	return (count);
}
