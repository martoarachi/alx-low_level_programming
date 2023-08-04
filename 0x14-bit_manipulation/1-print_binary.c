#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @k: number to print in binary
 */
void print_binary(unsigned long int k)
{
	int o, count = 0;
	unsigned long int current;

	for (o = 63; o >= 0; o--)
	{
		current = k >> o;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

