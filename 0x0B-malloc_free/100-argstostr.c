#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of the program
* @ac: The number of arguments
* @av: The array of arguments
*
* Return: A pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *str;

	int i, k, len;

	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len + 1;
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[k] = av[i][len];
			k++;
			len++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
