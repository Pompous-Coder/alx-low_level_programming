#include "main.h"
#include <stdlib.h>
/**
 * print_name- Self explanatory function
 * @name: pointer
 * @f: function
 *
 * Description: self explanatory
 * Return: see val beneath
 */
void print_name(char *name, void (*f)(char *))
{	
	if (name == NULL || f == NULL)
		return;
	f(name);
}
