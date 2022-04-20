#include "main.h"
/**
 * _puts - prints a string
 * @phrase: a pointer to an integer that will be changed
 * Return: 0
 */
void _puts(char *phrase)
{
char *c;
int d;

c = phrase;

for (d = 0; c[d]; d++)
{
_putchar (c[d]);
}

}