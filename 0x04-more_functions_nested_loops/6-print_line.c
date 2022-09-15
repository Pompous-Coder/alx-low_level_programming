#include "main.h"
/**
 * print_line- Self explanatory function
 * Description: desc.
 * Return: Always 0 if success
 */
void print_line(int n)
{ 
	do {
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
			n = n-1;
	}
	while(n)
}
