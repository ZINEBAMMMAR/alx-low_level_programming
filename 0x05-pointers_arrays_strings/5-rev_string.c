#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string to be  reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, XL, L;
	char temp;

	/* L: lenght , XL: Xlenght */
	L = 0;
	XL = 0;

	while (s[L] != '\0')
	{
		L++;
	}

	XL = L - 1;

	for (i = 0; i < L / 2; i++)
	{
		temp = s[i];
		s[i] = s[XL];
		s[XL--] = temp;
	}
}
