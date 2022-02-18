#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: string
 */

char *leet(char *s)
{
	int i;
	char *str = s;
	int lower[5] = {'a', 'e', 'o', 't', 'l'};
	/* upper = lower - 32 */
	char code[5] = {'4', '3', '0', '7', '1'};

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == lower[i] || *str == (lower[i] - 32))
			{
				*str = code[i];
				break;
			}
		}
		str++;
	}
	return (s);
}
