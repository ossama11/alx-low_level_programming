#include <stdlib.h>

/**
* _strdup - Returns a pointer to a new string
* @str: The string to duplicate
*
* Return: A pointer to the duplicated string,
*/
char *_strdup(char *str)
{
	int length, i;

	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
