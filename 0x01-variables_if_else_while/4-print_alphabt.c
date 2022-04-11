#include <stdio.h>
/**
 * main - main block
 * Return: 0
 *
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'q' && alphabt != 'e')
		{
			putchar(alphabt);
		}

	}
	putchar('\n');
	return (0);

}
