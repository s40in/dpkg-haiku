/*
 * Copyright 2019, s40in <s40in@hakilo.ru>
 * All rights reserved. Distributed under the terms of the GNU General Public License
 */


#include <unistd.h>
#include <stdio.h>

#include "haiku_link.h"


int		haiku_link(const char *toPath, const char *path)
{
	printf ("[DEBUG] haiku_link\n toPath=%s \n path=%s \n", toPath, path);
	return link(toPath, path);
	
}

int		haiku_unlink(const char *name)
{
	printf ("[DEBUG] haiku_unlink\n name=%s \n", name);
	return unlink(name);
	
}
