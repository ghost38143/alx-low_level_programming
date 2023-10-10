#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - this function prints a struct dog
 * @d: pointer to the struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->name : "(nil)");
	}
}
