#include "main.h"

/**
 * reverse_array - A function that rewrites the content of an array of integers
 * @n: The element in the array
 *
 * Return: 0 Always if successful
 */
oid reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
