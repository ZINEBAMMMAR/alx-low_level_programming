#include "main.h"

/**
 * _islower 6 check for lowercase character
 * @c: the character to be checked
 * Return: 1 for lower case character 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
