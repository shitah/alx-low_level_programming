#include "main.h"

/**
*swap_int - swaps two integers' value
*@a: first ineger
*@b: second integer
*Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
