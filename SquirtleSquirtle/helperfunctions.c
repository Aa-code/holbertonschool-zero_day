#include "shell.h"

char *exists(char *s1, char **s2)
{
	int i = 0, chk;
	char *ptr;

	for (; s2[i] != NULL; i++)
	{
		ptr = _strncon(s2[i], s1);
		chk = access(ptr, F_OK);
		if (chk == 0)
			return (ptr);
		else if (chk == -1)
			free(ptr);
	}
	return (NULL);
}



/**
 *
 *
 */
char *_strncon(char *s1, char *s2)
{
	int lens1, lens2, x = 0, y = 0;
	char *fullPath;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	fullPath = malloc(sizeof(char) * (lens1 + lens2 + 2));

	if (fullPath == NULL)
		return (NULL);

	for (; s1[x] != '\0'; x++)
		fullPath[x] = s1[x];

	fullPath[x] = '/';
	x++;

	for (; s2[y] != '\0'; y++, x++)
		fullPath[x] = s2[y];

	fullPath[x] = '\0';

	return (fullPath);
}


/**
 * _strcmp - comparing two strings
 * @s1: first string being compared
 * @s2: second string bring compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
        int strings = 0;

        while (s1[strings] == s2[strings])
        {
                if (s1[strings] == '\0')
                        return (0);
                strings++;
        }
        return (s1[strings] - s2[strings]);
}

/**
 * _strcat - Concatenates strings
 * @dest: Where the string is being concatenated
 * @src: The string being concatenated
 * @num: The amount of bytes of the string
 * Return: The pointer to where its being concatenated
 */

char *_strcat(char *dest, char *src, int num)
{
	int index, concat;
	for (index = 0; dest[index] != '\0'; index++)
	{
	}

	concat = 0;
	while (concat < num && src[concat] != '\0')
	{
		dest[index] = src[concat];
		index++;
		concat++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * _strlen - find the length of a string
 * @S: my counter
 * Return: string length
 */
unsigned int _strlen(char *S)
{
        unsigned int length = 0;

        for (length = 0; S[length]; length++)
	{
                ;
	}
        return (length);
}


/**
 * _strcopy - Copies a string
 * @dest: Where the string is being copied
 * @src: The string thats being copied
 * Return: The pointer to where its being copied
 */

char *_strcopy(char *dest, char *src)
{
	int index;
	for (index = 0; src[index] != 0; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * _strncpy - copies a string
 * @dest: where the string is being copied
 * @src: the string thats being copied
 * @n: the amount of bytes copied from the source
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int string;

	for (string = 0; string < n && src[string] != '\0'; string++)
	{
		dest[string] = src[string];
	}
	for (string = string; string < n; string++)
	{
		dest[string] = '\0';
	}
	return (dest);
}
