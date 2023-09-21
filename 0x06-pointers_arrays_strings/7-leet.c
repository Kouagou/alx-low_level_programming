#include "main.h"
#include <string.h>
/**
 * leet - A function that encodes a string into 1337.
 * @str: the string to be encoded
 *
 * Return: return the encoded string
 */
char *leet(char *str)
{
	int i, j, n, nAlpha;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {52, 51, 48, 55, 49};

	n = strlen(str);
	nAlpha = sizeof(lower) / sizeof(char);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < nAlpha; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = numbers[j];
		}
	}

	return (str);
}
