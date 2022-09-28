#include "main.h"
/**
 * _sqrt_recursion- Self explanatory function
 * @n: pointer
 * @a: etc
 * @b: etc
 *
 * Description: Describe function
 * Return: REturn value
 */
int rootVal(int a, int b);

int _sqrt_recursion(int n)
{	
	int i = 1;
	int result;

	result = rootVal(n, i);	
	return result;
}

/**
 * rootVal- funct
 * @a: int
 * @b: int
 * DEscription: finds sqaure
 * Return: square
 */
int rootVal(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (rootVal(a, b + 1));
}
