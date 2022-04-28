#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to the string
 * Return: length of thr string
 *
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s - 1));
}
