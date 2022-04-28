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
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - return 1 if string is palindrome and 0 otherwise
 * @s: the string to check
 * Return: 0 of 1
 *
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
