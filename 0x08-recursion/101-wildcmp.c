#include "main.h"
/**
* wildcmp - Compares two strings and checks.
* @s1: The first string.
* @s2: The second string with the special character '*'.
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);

		else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		else
			return (wildcmp(s1, s2 + 1));
	}

	else if (*s1 != '\0' && *s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

