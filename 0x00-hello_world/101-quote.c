#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints aline to the standard error
 * Return: 1 (successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
