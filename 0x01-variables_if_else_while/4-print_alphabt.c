#include <stdio.h>

/**
 * main - Ommit some alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

