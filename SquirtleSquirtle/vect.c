#include "shell.h"

/*
 * vect - Tokenize str and return vector array
 * @str: String to be tokenized and packaged
 * @n: length of str
 * Return: Vector array with tokens
 */

char **vect(char *str, ssize_t n, char *delim)
{
	char **args;
	char *buffer, *token, *bufpointer;
	int tokenCount = 0, index = 0;

	buffer = malloc(n + 1);
	_strncpy(buffer, str, n + 1);

	bufpointer = malloc(n + 1);
	_strncpy(bufpointer, str, n + 1);

	token = strtok(bufpointer, delim);

      
	while (token != NULL)
	{
		tokenCount++;
		token = strtok(NULL, delim);
	}
	free(bufpointer);

	args = malloc(sizeof(char *) * (tokenCount + 1));
	token = strtok(buffer, delim);
	while (token)
	{
	  args[index] = malloc(sizeof(char) * strlen(token) + 1);
	  _strncpy(args[index], token, strlen(token) + 1);
	  token = strtok(NULL, delim);
	  index++;
	}
	args[index] = NULL;
	free(buffer);
	return (args);
}
