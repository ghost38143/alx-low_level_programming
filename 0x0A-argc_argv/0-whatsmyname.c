#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that prints its name follwed by a new line
 * @argc: its the argument count
 * @argv: its the argument vector array
 * Return: value
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
