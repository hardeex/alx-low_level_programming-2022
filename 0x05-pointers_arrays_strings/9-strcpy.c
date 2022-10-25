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
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
