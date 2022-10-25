#include "main.h"
#include <stdio.h>

/**
 * rev_string - A function that reverses a string
 * @s: The function parameter
 *
 * Return: 0 Always if true
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
