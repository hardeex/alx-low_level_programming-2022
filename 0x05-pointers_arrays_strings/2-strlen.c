#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The function parameter
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
