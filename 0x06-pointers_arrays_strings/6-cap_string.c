#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: the string to be capitalized
 *
 * Return: return the string after capitalized all his words.
 */
char *cap_string(char *str)
{
	int i, j, num, nLength, sLength;
	char seps[] = {32, 9, 10, 44, 59, 46, 63, 33, 34, 40, 41, 123, 125};

	nLength = strlen(str);
	sLength = sizeof(seps) / sizeof(char);

	for (j = 0; j < nLength; j++)
	{
		num = 0;
		for (i = 0; i < sLength; i++)
		{
			if (str[j] == seps[i])
			{
				num = 1;
				break;
			}
		}

		if (num == 1 && isalpha(str[j + 1]) && islower(str[j + 1]))
		{
			str[j + 1] -= 32;
		}

		if (str[j] == 9)
			str[j] += 23; 
	}
	return (str);
}
