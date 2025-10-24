#include "gnl.h"

char *ft_strchr(char *s, int c) //create this one
{
    if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

void *ft_memcpy(void *dest, const void *src, size_t n) //create this one
{
    size_t	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

size_t ft_strlen(char *s) //change to this
{
    size_t ret = 0;
	if (!s)
		return (0);
	while (s[ret])
		ret++;
	return (ret);
}

int str_append_mem(char **s1, char *s2, size_t size2) //add '\0' and null check for s1
{
    size_t size1 = ft_strlen(*s1);
    char *tmp = malloc(size2 + size1 + 1);
    if (!tmp)
        return 0;
	if (*s1)
    	ft_memcpy(tmp, *s1, size1);
    ft_memcpy(tmp + size1, s2, size2);
    tmp[size1 + size2] = '\0';
    free (*s1);
    *s1 = tmp;
    return 1;
}

int str_append_str(char **s1, char *s2) //take char **s1
{
    return str_append_mem(s1, s2, ft_strlen(s2));
}

void *ft_memmove(void *dest, const void *src, size_t n) //change to this
{
    size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}

char *get_next_line(int fd) //change to this
{
    static char buffer[BUFFER_SIZE + 1];
    char	*line = NULL;
    char	*nl;
	ssize_t	bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		nl = ft_strchr(buffer, '\n');
		if (nl)
		{
			size_t len = nl - buffer + 1;
			if (!str_append_mem(&line, buffer, len))
				return (free(line), NULL);
			ft_memmove(buffer, buffer + len, ft_strlen(buffer + len) + 1);
			return (line);
		}
		if (!str_append_str(&line, buffer))
			return (free(line), NULL);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
		{
			if (bytes < 0 || !line || !*line)
				return (free(line), NULL);
			buffer[0] = '\0';
			return (line);
		}
		buffer[bytes] = '\0';
	}
}

int	main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
}
