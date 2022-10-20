#include "main.h"

/**
 * print_diagonal -  A function that draws a diagonaal line on the terminal
 * @n: The number of time the character \ is printed
 *
 * Return: \n if n is 0 or less
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
