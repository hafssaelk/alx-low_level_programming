# include "main.h"

/**
 * swap_int -  swap the value of 2 integer .
 * @a : pointer 1 .
 * @b : pointer 2 .
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
