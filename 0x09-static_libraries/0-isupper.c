#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - checks for uppercase
 * @c: letter to check
 * Return: Always zero
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
