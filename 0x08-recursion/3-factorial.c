#include "main.h"
/**
 * factorial- Self explanatory function
 * @n: pointer
 * Description: Describe function
 * Return: REturn value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
