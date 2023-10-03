#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that add two numbers in an argument
 * @argc: the argument count
 * @argv: the argument vector
 * Return: value
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
