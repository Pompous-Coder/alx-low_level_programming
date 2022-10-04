#include <stdio.h>
/**
 * main-  Self explanatory function
 * @argc: parameter
 * @argv: parameter
 *
 * Description: performing task
 * Return: return results
 */
int main(int argc, char *argv[])
{	unsigned int i;

	if (argc <= 0)
		return (-1);
	printf("%s\n", argv[0]);
	return (0);
}
