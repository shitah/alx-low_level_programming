#include "main.h"

/**
 * isupper - checks if a character is uppercase or not
 * @c: character shuold be tested
 * return: whether it is, 0 otherwise
 */
int _isupper(int c)
{
	if (( c >= 'A') && ( c <= 'z'))
	{
		return (1);
	}
	return (0);
}
