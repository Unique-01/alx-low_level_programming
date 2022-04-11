#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char small = 'a', capital = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('\n');
	return (0);

}
