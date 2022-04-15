#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
