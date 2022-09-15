#include "main.h"
/**
 * print_square- Self explanatory function
 * @size: val
 * Description: desc.
 * Return: Always 0 if success
 */
void print_square(int size)
{
	int length, col;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');		
		}
	}
	else
		_putchar('\n');
	
}	
