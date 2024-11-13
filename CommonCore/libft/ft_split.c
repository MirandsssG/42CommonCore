/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:25:08 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/13 15:45:42 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	combine_w(char **words, char const *s, char c, size_t word_c)
{
	char *ptr_c;

	while (*s && *s == c)
		s++;
	while (word_c--)
	{
		ptr_c = ft_strchr(s, c);
		if (ptr_c != NULL)
		{
			*words = ft_substr(s, 0, ptr_c - s);
			while (*ptr_c && *ptr_c == c)
				ptr_c++;
			s = ptr_c;
		}
		else
			*words = ft_substr(s, 0, ft_strlen(s));
		words++;
	}
	*words = NULL;
}

char **ft_split(char const *s, char c)
{
	size_t	word_c;
	char	**words;
	
	if (!s)
		return NULL;
	word_c = word_count(s, c);
	words = malloc(sizeof(char *) * (word_c + 1));
	if (!words)
		return NULL;
	combine_w(words, s, c, word_c);
	return (words);
}
