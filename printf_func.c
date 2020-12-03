#include "holberton.h"
/**
 * _printf - Produces poutput according to a format.
 * @format: It´s a character string, defines type of data.
 * Return: 0
**/

int _printf(const char *format, ...)
	{
	int count = -1;
	if (format != NULL)
	{
	int x;
	va_list valist;
	int (*o)(va_list);
	va_start(valist, format);

	if (format[0] == '%' && format[1] == '\0')
	return (-1);
	count = 0;
	for (x = 0; format[x] != '\0'; x++)
	{
	if (format[x] == '%')
	{
	if (format[x + 1] == '%')
	{
	count = count + _putchar(format[x]);
	x++;
}
	else if (format[x + 1] != '\0')
	{
	o = get_func(format[x + 1]);
		count += (o ? o(valist) : _putchar(format[x]) + _putchar(format[		x + 1]));
			x++;
		}
	}
	else
	count = count + _putchar(format[x]);
		}
		va_end(valist);
		}
			return (count);
}
