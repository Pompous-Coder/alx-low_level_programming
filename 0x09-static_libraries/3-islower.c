#include "main.h"
/**
 * _islower- Self explanatory function
 * @c:a value
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
