#include "main.h"

/**
 * puts2 - A function that prints ebery other character of a string,
 * starting from the first character, followed by a new line
 * @str: The function argument
 *
 * Return: 0 Always if successful
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}


