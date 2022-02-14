#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int i;
	int len;
	int middle;
	char tmp;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
