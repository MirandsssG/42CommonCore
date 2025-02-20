/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:05:29 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/02/20 17:27:40 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int  count_words(char *s, char c)
{
    int     count;
    bool    in_word;
    
    count = 0;
    while (*s)
    {
        in_word = false;
        while (*s == c)
            ++s;
        while (*s != c && *s)
        {
            if (!in_word)
            {
                ++count;
                in_word = true;
            }
        }
        ++s;
    }
    return (count);
}

static char *get_next_word(char *s, char c)
{
    static int  cursor = 0;
    char        *next_word;
    int         len;
    int         i;

    len = 0;
    i = 0;
    while (s[cursor] == c)
        ++cursor;
    while  ((s[cursor + len] != c) && s[cursor + len])
        ++len;
    next_word = malloc((size_t)len * sizeof(char) + 1);
    if (!next_word)
        return (NULL);
    while ((s[cursor] != c) && s[cursor])
        next_word[i++] = s[cursor++];
    next_word[i] = '\0';
    return (next_word);
}

char    **split(char *s, char c)
{
    int words_count;
    char **result_array;
    int i;

    i = 0;
    words_count = count_words(s, c);
    if (!words_count)
        exit(1);
    result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
    if (!result_array)
        return (NULL);
    while (words_count-- >= 0)
    {
        if (i == 0)
        {
            result_array[i] = malloc(sizeof(char));
            if (!result_array[i])
                return (NULL);
            result_array[i++][0] = '\0';
            continue ;
        }
        result_array[i++] = get_next_word(s, c);
    }
    result_array[i] = NULL;
    return (result_array);
}