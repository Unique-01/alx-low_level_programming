#include "main.h"
/**
 * _isalpha - check the code
 * @c: int
 * Return: 1(success) 0(failure)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
