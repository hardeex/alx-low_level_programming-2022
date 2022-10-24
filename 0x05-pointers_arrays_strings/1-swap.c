#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * @a: The first pointer integer
 * @b: The second pointer integer
 */
void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}
