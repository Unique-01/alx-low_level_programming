#include "main.h"
/**
 * print_most_numbers - print 1 - 9 except 2 & 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
