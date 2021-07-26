#include "holberton.h"

/**
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;

	va_start(arg, format);

	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case '\0' :
						return (-1);
				case '%' :
						i += _putchar('%');
						format++;
						break;
				case 'c' : 
						i += print_char(arg);
						format++;
						break;
				case 'd' :
						i = va_arg(arg, long int);
						_puts(convert(i, 10));
						format++;
						break;

				case 'o' : 
						i = va_arg(arg, unsigned int);
					    _puts(convert(i, 8));
						format++;
						break;
				case 's' :
						   i += print_string(arg);
						   format++;
						   break;
				case 'x' :
						   i = va_arg(arg, unsigned int);
						   _puts(convert(i, 16));
						   format++;
						   break;
				default:
						   i += _putchar('%');
			}
		}
		else 
			i += _putchar(*format);
	format++;
	}
	return (i);
}