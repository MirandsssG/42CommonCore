/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:24:20 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 20:28:13 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

    if (!s1 || !s2)
        return (0);
    while (*s1)
    {
        i = 0;
        while (s2[j])
        {
            if (*s1 == s2[j])
                return ((char *) s1);
            i++;
        }
        s1++;
    }
    return (0);
}

int main()
{
    char s1[] = "Ola Mundo";
    char s2[] = "u";
    printf("%s", ft_strpbrk(s1, s2));
}