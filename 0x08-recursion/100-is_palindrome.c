#include "main.h"
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
