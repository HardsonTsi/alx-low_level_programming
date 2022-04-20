#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer to an integer that will be changed
 * Return: 0
 */
void _puts(char *str)
{
    char *c;
    int d;

    c = str;

    for (d = 0; c[d]; d++)
    {
        _putchar(c[d]);
    }
}