#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
	int i, wc = 0, in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			wc++;
			in_word = 1;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	return (wc);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, wc, len, in_word = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = word_count(str);
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			for (len = 0; str[i + len] != ' ' && str[i + len]; len++)
				;
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[i + k];
			words[j][k] = '\0';
			j++;
			in_word = 1;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	words[j] = NULL;
	return (words);
}
