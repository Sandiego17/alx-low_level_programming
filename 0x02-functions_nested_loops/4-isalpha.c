#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic charater
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
