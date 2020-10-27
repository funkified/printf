#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include <starg.h>

/**
 * struct st - Function that prints the structure
 * @s: pointer that points to a string
 * @f: pointer that points to structure
**/

typedef struct st
{
	char *s;
	int (*f)(va_list);
} op_t;

int _putchar(char c);

#endif
