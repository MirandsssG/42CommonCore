/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:45:21 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/30 01:53:14 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void *ft_calloc(size_t nelem, size_t elsize)
{
	void	*pointer;

	pointer = (void *)malloc(nelem * elsize);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nelem);
	return (pointer);
}

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *array = (int *)ft_calloc(num_elements, element_size);
    if (array == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Testa se todos os elementos foram inicializados com zero
    int all_zero = 1;
    for (size_t i = 0; i < num_elements; i++) {
        if (array[i] != 0) {
            all_zero = 0;
            break;
        }
    }

    if (all_zero) {
        printf("Teste bem-sucedido: todos os elementos foram zerados.\n");
    } else {
        printf("Teste falhou: alguns elementos não foram zerados.\n");
    }

    free(array); // Libera a memória alocada
    return 0;
}