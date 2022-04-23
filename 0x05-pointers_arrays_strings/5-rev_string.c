#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: the string to be reverse
 * Return: Void
 *
 */

void rev_string(char *s)
{
	int i = 0;
	char temp;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		temp = putchar(s[i]);
	}

	*s = temp;
	return (*s);
}
