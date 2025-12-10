#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <aio.h>

float	distance(float a[2], float b[2])
{
	return (sqrtf((b[0] - a[0]) * (b[0] - a[0]) + (b[1] - a[1]) * (b[1] - a[1])));
}

float	tsp(float (*array)[2], ssize_t size)
{
	float shortest_length;

	return (shortest_length);
}

ssize_t	file_size(FILE *file)
{
	char	*buffer = NULL;
	size_t	n = 0;
	ssize_t ret;

	errno = 0;
	ret = 0;
	while ()
}
