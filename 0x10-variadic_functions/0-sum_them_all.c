#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters entered
 * @n: number of argument to sum
 * Return: integer sum or zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}

