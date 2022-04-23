#include "main.h"
#include <stdio.h>
/**
 * print_rev -  print a string in reverse order
 * @s: the string to be reverse
 * Return: Void
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
