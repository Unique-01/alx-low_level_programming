#include "main.h"
/**
 * print_square - print square with character #
 * @size: size of the square
 * Return: square
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');

	if (size == 0)
	{
		_putchar('\n');
	}
}
