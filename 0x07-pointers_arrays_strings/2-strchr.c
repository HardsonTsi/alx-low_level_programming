#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{
    int *search = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            search = s[i];
        }

        i++;
    }

    return (search);
}

int main(void)
{

    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');
}
