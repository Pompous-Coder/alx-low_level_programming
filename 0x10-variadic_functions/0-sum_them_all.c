#include "variadic_functions.h"
/**
 * sum_them_all- sum of all passed vars
 * @n: number of args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{	va_list argus;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum=0;
	va_start(argus, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argus, int);
	va_end(argus);
	return (sum);
}
