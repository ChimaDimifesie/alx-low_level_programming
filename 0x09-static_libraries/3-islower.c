#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - checks for lowercase letters
 * @c: character to check
 * Return: Always zero
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
