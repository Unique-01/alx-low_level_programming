#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: number for the factorial
 * Return: 0
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		_putchar(-1 + '0');
		return (0);
	}

	return (n * factorial(n - 1));
}
