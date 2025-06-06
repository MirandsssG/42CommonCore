/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:41:53 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/22 12:51:35 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str, int new_line)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	if (new_line)
	{
		while (str[i] != '\0' && str[i] != '\n')
			i++;
		if (str[i] == '\n')
			i++;
	}
	else
		while (str[i++] != '\0')
			;
	return (i);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*result;

	len1 = ft_strlen_gnl(s1, 0);
	len2 = ft_strlen_gnl(s2, 1);
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (free(s1), NULL);
	result[len1 + len2] = '\0';
	i = -1;
	while (++i < len1)
		result[i] = s1[i];
	i = -1;
	while (++i < len2)
		result[len1 + i] = s2[i];
	free(s1);
	i = -1;
	while (s2[len2 + ++i])
		s2[i] = s2[len2 + i];
	s2[i] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
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
