#include "main.h"

/*
 * A program that print letter a to z
 */

void print_alphabet(void)
{
	char letter = 'a';
		while(letter <='z)
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');

}
