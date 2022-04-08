#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  * main - assigns a random number to int n everytime
 *   * it executes, and prints it
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("is zero");
	}
	 else if (n > 0)
	{
		printf("is positive");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
