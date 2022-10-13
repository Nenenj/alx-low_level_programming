#include "function_pointers.h"

/**
 * print_name - name to be printed
 * @name: name to be printed
 * @f: function to print with
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
