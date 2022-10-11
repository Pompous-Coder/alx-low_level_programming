#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints items of struct
 *@d: pointer to struct
 *Return: void
 */
void print_dog(struct dog *d)
{	if(d)
	{	
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
