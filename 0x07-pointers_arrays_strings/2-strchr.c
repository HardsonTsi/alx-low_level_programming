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

	while (*s != '\0')
	{
		if (*s == c) 
		{
			search = s; 
		}
		s++;
	}
<<<<<<< HEAD
	return (search);
=======

	if (*s == c)
	{
		return (s);
	}


	return (0);
>>>>>>> e5233573bcac7287ce93b323effea46c29142660
}
