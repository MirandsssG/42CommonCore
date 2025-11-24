/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:23:20 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/11/24 00:05:17 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 4096

static int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_strncmp(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main(int ac, char **av)
{
	char	*pattern = av[1];
	int		pat_len = ft_strlen(pattern);
	char	buf[BUF_SIZE];
	char	window[BUF_SIZE];
	int		win_len = 0;
	int		bytes;
	int		i;
	int		j;
	
	if (ac != 2)
		return (1);

	while ((bytes = read(0, buf, BUF_SIZE)) > 0)
	{
		i = 0;
		while (i < bytes)
		{
			window[win_len++] = buf[i];
			if (win_len > pat_len)
			{
				write (1, &window[0], 1);
				j = 0;
				while (j < win_len - 1)
				{
					window[j] = window[j + 1];
					j++;
				}
				win_len--;
			}
			if (win_len == pat_len && ft_strncmp(window, pattern, pat_len) == 0)
			{
				j = 0;
				while (j < pat_len)
				{
					write(1, "*", 1);
					j++;
				}
				win_len = 0;
			}
			i++;
		}
	}
	j = 0;
	while (j < win_len)
	{
		write(1, &window[j], 1);
		j++;
	}
	return (0);
}
