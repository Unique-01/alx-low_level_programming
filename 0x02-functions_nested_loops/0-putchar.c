#include "main.h"
/**
 * main - main block
 * Return:0
 */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);

}