#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int word_len(char *str);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i = 0, j = 0, n_words = 0, len = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	n_words = count_words(str);
	if (n_words == 0)
	{
		return (NULL);
	}

	words = malloc((n_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		while (*str && *str == ' ')
		{
			str++;
		}

		len = word_len(str);
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++, str++)
		{
			words[i][j] = *str;
		}
		words[i][j] = '\0';
		i++;
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			count++;
			while (*str && *str != ' ')
			{
				str++;
			}
		}
		else
		{
			str++;
		}
	}

	return (count);
}

/**
 * word_len - Computes the length of a word
 * @str: The string containing the word
 *
 * Return: The length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}

	return (len);
}
