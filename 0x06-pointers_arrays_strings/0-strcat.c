#include "main.h"

/**
 * _strcat- A function that appends the src string to the dest string
 * overwriting the terminating null byte (\0).
 *
 * @dest: The pointer that is returned
 * @src: The parameter
 *
 * Return: dest if successful
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
