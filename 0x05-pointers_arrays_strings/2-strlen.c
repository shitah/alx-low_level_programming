#include "main.h"

/**
*_strlen - returns the lengthof string
*@s: string
*return: returns length as integers
*/

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;
	
	return (len);
}
