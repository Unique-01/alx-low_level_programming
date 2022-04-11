#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}

	char capital = 'A';

	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}

	putchar('\n');
	return (0);

}
