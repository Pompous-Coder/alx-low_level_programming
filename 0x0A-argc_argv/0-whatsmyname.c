#include <stdio.h>
/**
 * main - entry point
 * @argc: number
 * @argv: strings
 *
 * Return: (0) Success
 **/

int main(int argc, char *argv[])
{	if (argc <= 0)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
