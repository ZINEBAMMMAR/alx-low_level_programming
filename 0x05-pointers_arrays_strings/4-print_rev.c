#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s:string to be reverted
 *
 * Return: void
 */
void print_rev(char *s)
{
	int lenght = 0;

	/*L : lenght */
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (lenght -= 1; lenght >= 0 ; lenght--)
	{
		_putchar (s[lenght]);
	}
	_putchar('\n');
}
