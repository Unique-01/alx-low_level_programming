#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print tyhe parameters
 * @separator: the separator between the strings
 * @n:number of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(params, char));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(params);
}
