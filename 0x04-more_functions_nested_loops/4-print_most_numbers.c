#include "main.h"

/**
 * print_most_numbers - print a function that print numbers from
 * 0 to 9, followed by a new line
 * Do not print 2 and 4
 * use _putchar twice in the code
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
