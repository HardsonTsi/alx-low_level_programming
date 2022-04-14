#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(char c)
{
	int isupper = 0;

    if (c >= 'A' && c <= 'Z')
    {
        isupper = 1;
    }
	return isupper;
}