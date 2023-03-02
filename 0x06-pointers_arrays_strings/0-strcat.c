 #include"main.h"

/*
 * _strcat - concatenates two strings
 *
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{       
        i = 0;
        j = 0;
        while(*(dest + i) != '\0')
        {       
                i++;
        }
	while (i >= 0)
	{
		*(dest + i) = *(src + j);
		if(*src + j) == '\0'
			break;
		i++;
		j++;
	}
	return (dest);
}
