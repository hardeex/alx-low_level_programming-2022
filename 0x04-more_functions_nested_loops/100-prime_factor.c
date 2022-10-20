#include <stdio.h>

/**
 * main- A program that finds and prints the largest prime facotrs
 * of the number 612852475143, followed by a new line
 *
 * Return: 0 Always
 */
int void main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
Footer

