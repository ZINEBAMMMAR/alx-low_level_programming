#include "main.h"
/**
 * swap_int: swaps the values of two integers
 * @*a = the intger that need to be swaped with b
 * @*b = the integer that need to be swaped with a
 *
 * Return = void
 */

void swap_int(int *a, int *b)

{
	int t = *b;

	*b = *a;
	*a = t;
	
}
