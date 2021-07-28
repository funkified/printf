#include "holberton.h"
/**
 * _printf -print an output of given argumetn
 * @format: format given
 * Return: output of any type
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;

	if (format == NULL)
		return (-1);
	if (*format == '%' && *format == '\0')
		return (-1);

	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case '\0':
					return (-1);
				case '%':
					i += _putchar('%');
					format++;
					break;
				case 'c':
					i += print_char(arg);
					format++;
					break;
				case 'd':
					i = va_arg(arg, int);
					if (i < 0)
					{
						i = -i;
						_putchar('-');
					}
					_puts(convert(i, 10));
					format++;
					break;
				case 'i':
					i = va_arg(arg, int);
					_puts(convert(i, 10));
					format++;
					break;
				case 'o':
					i = va_arg(arg, int);
					_puts(convert(i, 8));
					format++;
					break;
				case 's':
					i += print_string(arg);
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
	va_end(arg);
	return (i);
}
