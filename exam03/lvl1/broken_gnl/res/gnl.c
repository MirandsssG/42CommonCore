#include "gnl.h"

char *ft_strchr(char *s, int c)
{
    int i = 0;
	if (!s) //verificar se tem alguma coisa
		return (NULL);
    while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]); //se encontrar caracter retornar pointer para a localizacao
		i++;
	}
	if ((char)c == '\0') //se o caracter for \0 returna a localizacao
		return ((char *)&s[i]);
	return (NULL);
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i = 0;
	if (!dest && !src) //verificar se os dois forem nulos
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i]; //transformar o (unsigned char *)dest no src
		i++;
	}
	return (dest); //retornar dest
}

size_t ft_strlen(char *s) //fazer esta
{
    size_t ret=0;
	if (!s)
		return (0);
    while (s[ret])
        ret++;
    return (ret);
}

int str_append_mem(char **s1, char *s2, size_t size2)
{
    size_t size1 = ft_strlen(*s1);
    char *tmp = malloc(size2 + size1 + 1);
    if (!tmp)
        return 0;
	if (*s1) //add this
    	ft_memcpy(tmp, *s1, size1);
    ft_memcpy(tmp + size1, s2, size2);
    tmp[size1 + size2] = '\0'; //change to '\0'
    free (*s1);
    *s1 = tmp;
    return 1;
}

int str_append_str(char **s1, char *s2) //should take char **s1
{
    return str_append_mem(s1, s2, ft_strlen(s2));
}

void *ft_memmove(void *dest, const void *src, size_t n) //change to this
{
    size_t	i;

	if (!dest && !src) //verificar se sao nulo
		return (NULL);
	if (dest < src) //se dest < src fazer loop de i ate n
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else //se dest >= src fazer loop de --n ate 0
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE + 1]; //transform to buffer and take the =
    char *line = NULL; //change to line
	char *nl; // create the new line
    ssize_t	bytes; // create ssize_t bytes
    
	if (fd < 0 || BUFFER_SIZE <= 0) // check for < 0
		return (NULL);
	while (1) // infinite loop
	{
		nl = ft_strchr(buffer, '\n'); // check for /n in buffer
		if (nl) // if there is a new line
		{
			size_t len = nl - buffer + 1; // get the len
			if (!str_append_mem(&line, buffer, len)) // check if can append mem
				return (free(line), NULL);
			ft_memmove(buffer, buffer + len, ft_strlen(buffer + len) + 1); //memmove to buffer after new line
			return (line); //return line
		}
		if (!str_append_str(&line, buffer)) //apend to line from buffer since no nl
			return (free(line), NULL);
		bytes = read(fd, buffer, BUFFER_SIZE); //read into buffer
		if (bytes <= 0) //check if bytes <= 0
		{
			if (bytes < 0 || !line || !*line) //check if bytes < 0 and if theres nothing in line
				return (free(line), NULL);
			buffer[0] = '\0'; //if bytes <= 0 null terminate the buffer
			return (line);
		}
		buffer[bytes] = '\0'; //null terminate the buffer
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
