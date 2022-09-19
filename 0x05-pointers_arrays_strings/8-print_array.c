#include "main.h"
/**
 * print_array- Self explanatory function
 * @a: pointer
 * @n:num of times
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void print_array(int *a, int n)
{
	int num = n - 1;
	int j;

	for (j = 0; j < n; j++)
	{	printf("%d", a[j]);
		if (!(j == num))
		{
			printf(", ");
		}
	}

	printf("%c", '\n');
}
