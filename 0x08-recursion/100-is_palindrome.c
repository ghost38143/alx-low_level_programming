#include "main.h"
/**
 * strlen_recursion - return the length of the string
 * @s: string
 * Return: the length
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}
/**
 * comparator - compares each charcter of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest narrator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: the string
 * Return: 1 if s is a palindrome and 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, strlen_recursion(s) - 1));
}
