/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:53:59 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/31 16:32:27 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
	void	*pointer;

	pointer = (void *)malloc(nelem * elsize);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nelem * elsize);
	return (pointer);
}
