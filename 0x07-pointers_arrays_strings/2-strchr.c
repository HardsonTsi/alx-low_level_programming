#include "main.h"

/**
  * _strchr - Locates a character in a string
  * @s: String
  * @c: Character to search
  * Return: Pointer to the first occurrence of the character c in the string s
  **/

char *_strchr(char *s, char c)
{   

    char *search = NULL;

	while (*s != '\0' && *s != c)
	{
		if (*s == c) 
		{
			search = s; 
		}
		s++;
    }
}
