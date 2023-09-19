#include "main.h"
#include<stdio.h>
#include <string.h>

/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");

}
