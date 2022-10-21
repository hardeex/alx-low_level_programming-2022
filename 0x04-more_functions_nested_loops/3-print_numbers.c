#include "main.h"

/**
 * print_numbers - A function that prints number from 0 to 9
 * followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}

