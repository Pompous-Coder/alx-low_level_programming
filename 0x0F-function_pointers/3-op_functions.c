#in#nclude "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: first 
 * @b: second 
 * Return: sum of both numbers
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subraction
 * @a: first number
 * @b: second number
 * Return: minused result
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: product value
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first 
 * @b: second 
 * Return: division result
 **/

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo of 2 numbers
 * @a: first number
 * @b: second number
 * Return: modulo
 **/

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}

