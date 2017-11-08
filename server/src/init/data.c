/*
** references.c for SERVER in /home/alexandre/Documents/git/fileTransfert/server/src/init
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Wed Nov 01 19:01:10 2017 alexandre Chamard-bois
** Last update Sun Nov 05 11:58:01 2017 alexandre Chamard-bois
*/

#include "sys/types.h"
#include "string.h"
#include "stdio.h"

int valid_data(void *data, char *buff, size_t size)
{
	if (size > FILENAME_MAX - (*buff != '/')) {
		puts("Size max is 255 characters.");
		return (1);
	}
	if (*buff == '/') {
		strncpy(data, buff, size - 1);
	} else {
		*(char*)data = '/';
		strncpy(data + 1, buff, size - 1);
	}
	return (0);
}

int set_default_data(void *data)
{
	strcpy(data, "/data");
	return (0);
}
