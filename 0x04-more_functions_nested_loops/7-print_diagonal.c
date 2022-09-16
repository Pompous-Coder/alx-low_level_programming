#include "main.h"
/**
 * print_diagonal- Self explanatory function
 * @n: val
 * Description: desc.
 * Return: Always 0 if success
 */


void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col < row)
				{
					_putchar(' ');
				}
				if (col == n)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}

