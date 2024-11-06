/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:25:43 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/29 12:35:24 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char	c_char;
	char 			*s_str;
	
	i = 0;
	c_char = (unsigned char)c;
	s_str = (char *) s;
	while (i < n)
	{
		s_str[i] = c_char;
		i++;
	}
	return (s);
}

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void    main()
{
    char str[50] = "Ola Mundo";
    int    i;

    i = -1;
    printf("Before bzero = ");
    while (++i < 6)
        printf("%c", str[i]);
    printf("\n");

    i = -1;
    ft_bzero(str, 6);

    printf("after ft_bzero = ");
    while (i++ < 6)
        printf("%c", str[i]);
    printf("\n");

    char str1[50] = "Ola Mundo";
    i = -1;

    bzero(str1, 6);
    printf("after bzero = ");
    while (i++ < 6)
        printf("%c", str1[i]);
    printf("\n");
}
