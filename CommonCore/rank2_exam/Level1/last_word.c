/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:44:58 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 17:08:27 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int len = 0;
        while (av[1][len] != '\0')
            len++;
        int end = len - 1;
        while (end >= 0 && (av[1][end] == ' ' && av[1][end] == '\t'))
            end--;
        int start = end;
        while (start >= 0 && (av[1][start] != ' ' && av[1][start] != '\t'))
            start--;
        start = start + 1;
        while (start <= end)
        {
            write (1, &av[1][start], 1);
            start++;
        }
    }
    write (1, "\n", 1);
    return (0);
}