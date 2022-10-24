#include "main.h"

/**
 * _strcpy - A function that copies the string pointed by src
 * @dest: The result of the function
 * @src: The source
 *
 * Return: dest if successful
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
