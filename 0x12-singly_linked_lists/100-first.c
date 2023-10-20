#include <stdio.h>

/**
 * first - A function that prints a text before
 * main function is executed.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
