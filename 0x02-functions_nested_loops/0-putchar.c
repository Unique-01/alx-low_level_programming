#include "main.h"
/**
 * main - main block
 * Return:0
 */
int _putchar(char c)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);

}

