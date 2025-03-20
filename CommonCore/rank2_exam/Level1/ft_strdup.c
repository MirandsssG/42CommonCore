/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:20:01 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 20:23:58 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int size = 0;
    
    while (src[size] != '\0')
        size++;
    char *str_dup = malloc(sizeof(char *) * size);
    if (str_dup != NULL)
    {
        while (src[i])
        {
            str_dup[i] = src[i];
            i++;
        }
        str_dup[i] = '\0';
    }
    return (str_dup);
}

int main()
{
        char str[] = "Ola Mundo";
        printf("%s", ft_strdup(str));
}