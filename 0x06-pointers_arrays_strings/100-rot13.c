#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */
char *rot13(char *str)
{
	int i;
	char *s = str;
	char rot13[] = {'a', 'z', 'A', 'Z'};

	/*
	 * Example for lowercase rotation
	 *	if (*s >= 'a' && *s <= 'z')
	 *		*s = 'a' + ( ( (*s - 'a') + 13 ) % 26 );
	 */

	while (*s != '\0')
	{
		for (i = 0; i < 4; i += 2)
			if (*s >= rot13[i] && *s <= rot13[i + 1])
			{
				*s = rot13[i] + (((*s - rot13[i]) + 13) % 26);
				break;
			}

		s++;
	}

	return (str);
}
