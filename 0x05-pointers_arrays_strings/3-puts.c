#include "main.h"

/**
 * _puts - A function that print a string,
 * followed by a new line, to stdout
 * @str: The parameter of the funtion
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
