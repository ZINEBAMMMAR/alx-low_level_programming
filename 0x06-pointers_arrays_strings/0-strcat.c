#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: The concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
