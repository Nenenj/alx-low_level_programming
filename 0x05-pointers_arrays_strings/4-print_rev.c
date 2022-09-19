#include <stdio.h>
#include <string.h>
include "main.h"

/**
 * print_rev - prints string backwards
 * @s: String to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
