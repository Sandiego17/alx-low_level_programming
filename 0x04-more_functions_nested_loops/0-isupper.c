#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @x: The number to be checked
 * Returns: 1 if `c` is upper and 0 if otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
