#include "lists.h"

void _constructor(void) __attribute__((constructor));

/**
 * _constructor - print before main is executed
*/

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon
			my back!\n");
}
