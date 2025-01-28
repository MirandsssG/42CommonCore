/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:41:39 by mirandsssg        #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/18 18:02:05 by dluis-ma         ###   ########.fr       */
=======
/*   Updated: 2025/01/22 14:24:18 by mirandsssg       ###   ########.fr       */
>>>>>>> 5a18a41a1821afee2405c27f8d87e253a24a49d3
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
