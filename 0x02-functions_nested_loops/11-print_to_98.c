#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: int
 * Return: 0
 */

void print_to_98(int n)
{
	int num = 0;

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != n)
			{
				printf(", ");
			}
			printf("%d", num);
		}
	}
	else
	{
		for (num = n; num <= 98; num++)
		{
			if (num != n)
			{
				printf(", ");
			}
			printf("%d", num);
		}
	}
	putchar('\n');
}
