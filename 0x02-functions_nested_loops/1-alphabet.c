#include "main.h"
/**
 *  print_alphabet - Entry point
 *  Description: a function that prints the alphabet,
 *  in lowrer case followed by a new line
 *  Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter < = 'z')
	{
		-putchar(letter);
		letter++;
	}
	-putchar('\n');
}
