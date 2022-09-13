#include "main.h"
/**
 * _isalpha- Self explanatory function
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
