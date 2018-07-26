#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name to output
 * @name: first argument
 * @f: second argument
 */

void print_name(char *name, void (*f)(char *));
{
	while(f && name)
			f(name);
}
