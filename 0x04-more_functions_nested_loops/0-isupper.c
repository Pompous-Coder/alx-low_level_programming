#include "main.h"
/**
 * _isupper- check for uppercase
 * @c:a value to operate on
 * Description: checking for  uppercase
 * Return: Always 0 if success
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
