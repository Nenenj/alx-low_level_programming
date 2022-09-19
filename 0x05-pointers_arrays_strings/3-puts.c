#include "main.h"

/**
 * puts - prints string
 * @str: string to print
 *
 * Description: prints a string
 * Return: returns no error
 */

void puts(char *str)
{
	int i = 0;

	while (*(str * i) != '\0')
	{

		_putchar(*(str * i));
		i++;
	}
	_putchar('\n');
}

