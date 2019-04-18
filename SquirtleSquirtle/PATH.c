#include "shell.h"

/**
  * PATHfind - Looks for PATH= in our enviroment
  * @enviroment: Our enviroment
  * Return: PATH
  */

char **PATHfind(char **enviroment)
{
        char *find = "PATH=", **ptr;
        unsigned int command, name;

        for (command = 0; enviroment[command] != NULL; command++)
        {
                for (name = 0; name < 5; name++)
                        if (find[name] != enviroment[command][name])
                                break;
                if (name == 5)
                        break;
        }

	ptr = vect(&enviroment[command][5], _strlen(&enviroment[command][5]), \
":");

	command = 0, name = 0;

/*	for (; ptr[command] != NULL; command++)
	{
		for (; *ptr[name] != '\0'; name++)
			;



			}*/
        return (ptr);
}
