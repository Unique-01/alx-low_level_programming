#include "main.h"
/**
 * print_last_digit - check the code
 * @a: int
 * Return: 0
 */

int print_last_digit(int a)
{
	int num;
	
	if (a < 0)
	{
		num = -1 * (a % 10);
	}
	else
	{
		num = a % 10;
	}
	_putchar(num + '0');
	return (num);
	
	
}
