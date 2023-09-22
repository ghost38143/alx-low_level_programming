#include "main.h"
/**
 * leet - converting charcters into leet speak
 * @s: the string to be converted
 * Return: string
 */
char *leet(char *s)
{
	int i;
	char map[128] = {0};

	map['a'] = map['A'] = '4';
	map['e'] = map['E'] = '3';
	map['o'] = map['O'] = '0';
	map['t'] = map['T'] = '7';
	map['l'] = map['L'] = '1';

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		if (map[(int)c] == 0)
		{
			s[i] = map[(int)c];
		}
	}
	return (s);
}
