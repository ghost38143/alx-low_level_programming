#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_tab - print an array of strings
 * @tab: the array to print
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;
	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 * main - check the code for alx students
 * Return: 1 if an error ocurred 0 otherwise
 */
int main(void)
{
	char **tab;
	tab = strtow("           ALX Sxhool      #cisfun       ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
