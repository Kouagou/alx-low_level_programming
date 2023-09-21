#include "main.h"
#include <string.h>

/**
 * rot13 - A function that encodes a string using rot13.
 * @str: the string to be encoded
 *
 * Return: return the encoded string
 */
char *rot13(char *str)
{
	int i, j, n, nAlpha;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm\0";

	n = strlen(str);
	nAlpha = strlen(input);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < nAlpha; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}

	return (str);
}
