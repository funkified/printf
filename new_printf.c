#include "holberton.h"
/**
 */
int _printf(const char *format, ...)
{
	int i, argument_len;
	int len = 0;
	va_list arg;
	
	if (format == NULL)
		return (-1);

	va_start(arg, format);
	
	if (arg == NULL)
			return (-1);

	argument_len = arg_len(format);
	if (argument_len == 1 && format[0] == '%')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
			if (format[i] == '%' && arg != NULL)
			{
				switch (format[i] != '\0')
				{
					case 's': 
						i = va_arg(arg, int);
						print_str(arg);
						break;
					case 'c':
						i = va_arg(arg, int);
						break;
					case 'd':
						i = va_arg(arg, int);
						print_int(i, len);
						break;
					case 'i':
						i = va_arg(arg, int);
						print_int(i, len);
					break;
				default:
					i += _putchar('%');
				}
			}
			else
				i += _putchar(*format);
		}
	}
	va_end(arg);
	return (i);
}

