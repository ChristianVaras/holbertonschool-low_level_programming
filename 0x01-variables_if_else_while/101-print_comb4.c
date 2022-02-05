#include <stdio.h>
/**
 * main - Print all combination of three different digits
 * in ascending order, separated by a comma followed by a space.
 * Return: Always 0(Success)
 */
int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++) /*hundreds place*/
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++) /*tens=100s+1*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*ones*/
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hundreds != '7' || tens != '8')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
