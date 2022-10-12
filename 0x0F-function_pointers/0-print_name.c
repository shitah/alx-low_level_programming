#include <stdlib>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to point a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!namme || !F)
		return;
	f(name);
}
