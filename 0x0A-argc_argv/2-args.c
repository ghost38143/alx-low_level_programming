#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints all arguments its receives
 * @argc: argument count
 * @argv: argument array
 * Return: value
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
