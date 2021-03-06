#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: Number to calcute the factorial of
 *
 * Return: Factorial of n, -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	/* Case for n=0 or n=1 */
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
