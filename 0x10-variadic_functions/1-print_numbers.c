#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the number passed in as arguments with the separator
 * @separator: To separate the Numbers
 * @n:number of parameters
 * @...: variable numbers to be printed
 * Return: the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}