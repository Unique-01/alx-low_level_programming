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
	int i = 0, j;
	char temp;

	while (s[i])
	{
		i++;
	}

	j = i / 2;

	while (j--)
	{
		temp = putchar(s[j]);
	}

	*s = temp;
}
