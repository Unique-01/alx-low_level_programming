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
	int i = 0, j, right;

	while (s[i])
		i++;

	j = i / 2;
	right = 0;

	while (right != j)
	{
		char temp = s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left] = temp;

		right++;
	}
}
