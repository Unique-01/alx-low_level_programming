#include "main.h"
/**
 * _strlen - print the length of a string
 * @s: String
 * Return: int
 */

int _strlen(char *s)
{
	int len;
	
	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
