#include <stdio.h>
#include <stdlib.h>

/**
* is_positive_number - Check if a given string is a positive number
* @str: The string to check
*
* Return: 1 if the string is a positive number, 0 otherwise
*/
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
