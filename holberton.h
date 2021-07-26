#ifndef __PRINTF_H__
#define __PRINTF_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/* Prototypes */
int _printf(const char *format, ...);
char *convert(unsigned int num, int base);
int _putchar(char c);
int print_char(va_list arg);
int puts_string(char *s);
int print_string(va_list arg);
int _strlen(char *s);
long int print_dec(va_list arg);
int _puts(const char *s);
#endif
