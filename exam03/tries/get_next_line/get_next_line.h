#ifndef GNL
#define GNL

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif
char *get_next_line(int fd);
#endif
