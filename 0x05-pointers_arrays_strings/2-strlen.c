#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The function parameter
 * Return: The length of the string
 */
size_t strlen(const char *s)
{
	size_t len = 0;

	while(*s++)
		len++;
	return (len);
}
