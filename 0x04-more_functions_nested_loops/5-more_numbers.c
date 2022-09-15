#include "main.h"
/**
 * more_numbers- Self explanatory function
 * Description: Printing numbers 0-14.
 * Return: Always 0 if success
 */
void more_numbers(void)
{	int str;
	int cou;

	for (cou = 0; cou <= 9; cou++)
	{
		for (str = 0; str <= 14; str++)
		{
			_putchar(str);
		}

		_putchar('\n');
	}
}
