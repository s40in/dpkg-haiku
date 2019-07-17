/*
 * Copyright 2019, s40in <s40in@hakilo.ru>
 * All rights reserved. Distributed under the terms of the GNU General Public License
 */


#include <unistd.h>
#include <stdio.h>

#include "haiku_link.h"




int		haiku_link(const char *toPath, const char *path)
{
//	printf ("\n[DEBUG] haiku_link\n toPath=%s \n path=%s \n", toPath, path);
	
	//return link(toPath, path);
	return haiku_copy_file(toPath, path);
	
	
}

int		haiku_unlink(const char *name)
{
//	printf ("\n[DEBUG] haiku_unlink\n name=%s \n", name);
	return unlink(name);
	
}

int haiku_copy_file(const char *source_file, const char *target_file)
{
	char ch;
	FILE *source, *target;
	
	source = fopen(source_file, "r");
	
	if (source == NULL)
	{
		return 1;
	}
	
	target = fopen(target_file, "w");
	
	if (target == NULL)
	{
		fclose(source);
		return 1;
	}
	
	while ((ch = fgetc(source)) != EOF)
		fputc(ch, target);
	
	fclose(source);
	fclose(target);
	return 0;
}
