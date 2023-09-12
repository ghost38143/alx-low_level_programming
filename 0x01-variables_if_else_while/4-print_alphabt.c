#include <stdio.h>
/**
 * main printing lower case except q and e
 * Return; always (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n'); /* New line */
	return (0);
}	
	

