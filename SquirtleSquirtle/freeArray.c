#include "shell.h"

/**
 * freeArray - Free's the group of pointers
 *
 */

void freeArray(char **cmd)
{
	int index;
	while (cmd[index])
	{
		free(cmd[index]);
		index++;
	}
		free(cmd);
}
