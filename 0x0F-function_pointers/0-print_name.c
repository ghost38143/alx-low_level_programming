#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: pointer to the name
 * @f: pointer to the function to be called back
 * @char: the datatype parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
