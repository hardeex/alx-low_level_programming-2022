#include <stdio.h>
#include <unistd.h>

/**
 * Main- Entry Point
 * Return 0 if successfully
 */

int _putchar(char myVar)
{
	return (write(1, &myVar, 1));
}
