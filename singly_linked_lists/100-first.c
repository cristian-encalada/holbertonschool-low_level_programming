#include <stdio.h>
#include "lists.h"

/**
 * beforeMain - Apply the constructor attribute to beforeMain(), so
 *	- it's possible to print a string before the main function is executed.
 */
void __attribute__ ((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
