#include "main.h"
/**
 * _pow_recursion- Self explanatory function
 * @x: pointer
 * @y:
 *
 * Description: Describe function
 * Return: REturn value
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	return (x * (_pow_recursion(x, (y - 1))));
}
