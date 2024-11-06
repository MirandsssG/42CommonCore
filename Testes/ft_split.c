/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:36:44 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/05 17:42:49 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static	char **ft_alloc_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	size_t	total;
	
	i = 0;
	total = 0;
	while (s[i])
	{
		if (s[i] == c)
			total++;
		i++;
	}
	split = (char**)malloc(sizeof(s) * (total + 2));
	if (!split)
		return (NULL);
	return (split);
}
void	*ft_free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static	void ft_split_by_char(char **split, char const *s, char c)
{
	
}

char **ft_split(char const *s, char c)
{
	char **split;

	if (!(split == ft_alloc_split(s, c)));
		return (NULL);
	if (!ft_split_by_char(split, s, c));
		return (NULL);
	return (split);
}
