#include <stdio.h>
/**
 * main - A program that prints the sizeof various computer data types
 * This program prints the size, in bytes, of various computer data types
 * such as char, int, long int, long long int, and float. It demonstrates
 * how to use the sizeof operator to determine the memory consumption of
 * different data types on your computer architecture
 * return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long) sizeof(e));
	return (0);
}
