#include "main.h"

/**
 * print_square - A function that prints a square
 * followed by a new line
 * @size: The size of the square
 *
 * Return: print a new line if size is 0 or less
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
