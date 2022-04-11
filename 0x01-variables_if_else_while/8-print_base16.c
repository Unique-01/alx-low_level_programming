#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char alp = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(alp);
			alp++;
		}


	}
	putchar('\n');
	return (0);

}
