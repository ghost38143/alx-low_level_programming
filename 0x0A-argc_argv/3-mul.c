#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the result of your multiplication
 * @argc: the argument count
 * @argv: the argument vector
 * Return: value
 */
int main(int argc, char **argv)
{
	int i;
	int value = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			value *= atoi(argv[i]);
		}
		printf("%d\n", value);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
