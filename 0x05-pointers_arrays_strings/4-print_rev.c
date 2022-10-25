#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: The function parameter
 *
 * Return: 0 Always if successful
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
