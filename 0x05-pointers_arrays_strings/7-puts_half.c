#include "main.h"
#include <stdio.h>
/**
 * puts_half - print the half of a string
 * @str: input string
 * Return: Void
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	if (i % 2 != 0)
		n = (i + 1) / 2;
	else
		n = i / 2;

	for (; str[n] != '\0'; n++)
		putchar(str[n]);

	putchar('\n');
}
