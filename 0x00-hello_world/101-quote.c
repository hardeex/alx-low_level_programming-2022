/**
 *  File: 101-quote.c
 *  Ref: Brennan D Baraban
 */

#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	/*
	 * writing the text
	 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
