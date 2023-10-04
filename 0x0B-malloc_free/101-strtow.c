#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
        i++;
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, k, len;

    if (str == NULL || str[0] == '\0')
        return NULL;

    word_count = count_words(str);
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            len = 0;
            while (str[i + len] != ' ' && str[i + len] != '\0')
                len++;

            words[j] = malloc((len + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                for (k = 0; k < j; k++)
                    free(words[k]);
                free(words);
                return NULL;
            }

            for (k = 0; k < len; k++)
                words[j][k] = str[i++];
            words[j][k] = '\0';
            j++;
        }
        else
        {
            i++;
        }
    }

    words[j] = NULL;
    return words;
}