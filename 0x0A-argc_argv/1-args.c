#include <stdlib.h>
#include <stdio.h>
/**
 * main - functions that prints the number of arguments passed to it
 * @argc: the argument count
 * @argv: the argument vector array
 * Return: value
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
