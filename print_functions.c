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
