/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:09:08 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/02 21:21:01 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_toupper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char		*str;
	size_t		i;
	
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!(str = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

int	main()
{
	const char *original = "Ola Mundo";
	char *modified;

	modified = ft_strmapi(original, ft_toupper);
	if (modified)
	{
		printf("Original = %s\n", original);
		printf("Modified = %s\n", modified);
	}
	else
		printf("Erro\n");
}
