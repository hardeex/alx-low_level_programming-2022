#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n element of an array of integers
 * @n: The number of array element to be printed
 * @a: The input integer
 *
 * Return: 0 Always if successful
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}







