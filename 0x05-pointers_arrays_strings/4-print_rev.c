#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: The function parameter
 *
 * Return: 0 Always if successful
 */
void print_rev(char *s)
{
	char *len = s;

	while (*len)
		len++;
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
