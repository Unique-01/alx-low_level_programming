#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum af the passed in arguments
 *@n: the number of parameters
 * @...: variables of parameters to sum for
 * Return: sum of all integer arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
