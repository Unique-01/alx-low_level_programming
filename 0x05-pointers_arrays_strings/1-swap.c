#include "main.h"
/**
 * swap_int - code to swap the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Void
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
