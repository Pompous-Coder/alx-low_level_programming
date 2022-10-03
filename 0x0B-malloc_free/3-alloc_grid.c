#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- Self explanatory function
 * @width: var
 * @height: var
 *
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
int **alloc_grid(int width, int height)
{	int a, b;
	int **point;

	if (width <= 0 || height <= 0)
		return (NULL);
	point = malloc(height * sizeof(int *));
	if (point == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{	point[a] = malloc(width * sizeof(int));
		if (point[a] == NULL)
		{	for (a = 0; a < height; a++)
				free(point[a]);
			free(point);
		}
		for (b = 0; b < width; b++)
			point[a][b] = 0;
	}
	return (point);
}
