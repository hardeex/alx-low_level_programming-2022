#include "main.h"

/**
 * _isdigit- a funtion that checks for a digit 0 through 9
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
