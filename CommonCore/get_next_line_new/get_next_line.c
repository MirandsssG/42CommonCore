/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:43:24 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/21 14:43:26 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	ssize_t		bytes_read;
	char		*line;

	line = NULL;
	bytes_read = 1;
	while ((fd >= 0 && BUFFER_SIZE > 0) && bytes_read > 0)
	{
		if (buff[0])
		{
			line = ft_strjoin(line, buff);
			if (!line)
				return (NULL);
			if (line[ft_strlen(line, 1) - 1] == '\n')
				break ;
		}
		else
		{
			bytes_read = read(fd, buff, BUFFER_SIZE);
			if (bytes_read < 0)
				return (free(line), NULL);
			buff[bytes_read] = '\0';
		}
	}
	return (line);
}

int main(void)
{
	char *line;

    int fd = open("test_file.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);
    line = get_next_line(fd);
	printf("Line: %s", line);
	free(line);

    close(fd);
    return (0);
}
