#include "main.h"

/**
 * puts - prints a string
 * @str:  String to be printed
 *
 * Description: prints a string
 * On success: return no error
 */

void puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

		_putchar((*str + i));
		i++;
	}
	_putchar(10);
}
