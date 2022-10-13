#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_numbers- some text
 * @separator: conjunction
 * @n: number of args
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{	va_list nums;
	unsigned int i;
	int j;
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{	j = va_arg(nums, int);
		printf("%d", j);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}

