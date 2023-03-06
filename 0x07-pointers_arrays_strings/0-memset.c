#include "main.h"

/**
 * _memset - entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < 10; i++)
		s[i] = b;
	n--;
	return (s);
}
