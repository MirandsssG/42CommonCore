/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:07:54 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/26 20:32:41 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *buffer;
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str_s;

	i = 0;
	str_s = (char *)s;
	while (str_s[i] != '\0')
	{
		if (str_s[i] == (char)c)
			return (&str_s[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str_s[i]);
	return (NULL);
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*pointer;
	size_t	total_size;

	total_size = nelem * elsize;
	if (nelem != 0 && total_size / nelem != elsize)
		return (NULL);
	pointer = malloc(total_size);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, total_size);
	return (pointer);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c_char;
	char			*s_str;

	i = 0;
	c_char = (unsigned char)c;
	s_str = (char *)s;
	while (i < n)
	{
		s_str[i] = c_char;
		i++;
	}
	return (s);
}
