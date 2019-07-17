/*
 * Copyright 2019, s40in <s40in@hakilo.ru>
 * All rights reserved. Distributed under the terms of the GNU General Public License
 */



int		haiku_link(const char *toPath, const char *path);

int		haiku_unlink(const char *name);

int haiku_copy_file(const char *source_file, const char *target_file);
