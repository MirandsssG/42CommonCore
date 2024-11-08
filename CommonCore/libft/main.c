/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:20:06 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/11/08 04:10:24 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	st_toupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	st_toupper1(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char		str[50] = "Ola Mundo";
	char		str1[50] = "Ola Mundo";
	char		str2[50] = "Olau Mundo";
	char		str3[50] = "-123456789";
	char		str5[50] = "Ola Mundo";
	char		str6[50] = "Ola Mundo Teste";
	char		str7[50] = "Ola Mundo";
	char		str8[50] = "ola mundo";
	char		set[50] = "Ola Teste";
	char		src[50] = "Ola Mundo";
	char		dest[50] = "ALOOOOOO";
	const char	*src1 = "Pao com Manteiga";
	const char	*src2 = "Pao com Manteiga";
	char		dst[50] = "Ola Mundo";
	char		dst1[50] = "Ola Mundo";
	// char		big[50] = "Ola Mundo";
	// char		little[50] = "a";
	char		s1[] = "123456";
	char		s2[] = "123456";
	char		s3[] = "123456";
	char		s4[] = "654321";
	char		s5[] = "654321";
	char		s6[] = "123456";
	char		s7[] = "123456";
	char		s8[] = "123478";
	char		s9[50] = "Ola Mundo";
	char		s10[50] = "Ola Mundo";
	char		s11[50] = "Olaa Mundo";
	char		s12[50] = "Ola Mundo";
	char		s13[50] = "Ola Mundo";
	char		s14[50] = "Olaa Mundo";
	char		s15[50] = "Ola Mundo";
	char		s16[50] = "Teste123";
	int			n1;
	int			n2;
	int			i;
	char		*result_ft;
	char		*result_std;
	size_t		n_elements;
	int			*arr;
	const char	*original = "Ola Mundo";
	char		*modified;

	n1 = 912367;
	n2 = -912367;
	i = -1;
	printf("isalpha:\n");
	printf("ft_isalpha(a) = %d\n", ft_isalpha('a'));
	printf("isalpha(a) = %d\n", isalpha('a'));
	printf("ft_isalpha(A) = %d\n", ft_isalpha('A'));
	printf("isalpha(A) = %d\n", isalpha('A'));
	printf("ft_isalpha(@) = %d\n", ft_isalpha('@'));
	printf("isalpha(@) = %d\n", isalpha('@'));
	printf("\n\n");
	

	printf("isdigit:\n");
	printf("ft_isdigit(0) = %d\n", ft_isdigit('0'));
	printf("isdigit(0) = %d\n", isdigit('0'));
	printf("ft_isdigit(9) = %d\n", ft_isdigit('9'));
	printf("isdigit(9) = %d\n", isdigit('9'));
	printf("ft_isdigit(@) = %d\n", ft_isdigit('@'));
	printf("isdigit(@) = %d\n", isdigit('@'));
	printf("\n\n");
	

	printf("isalnum:\n");
	printf("ft_isalnum(0) = %d\n", ft_isalnum('0'));
	printf("isalnum(0) = %d\n", isalnum('0'));
	printf("ft_isalnum(A) = %d\n", ft_isalnum('A'));
	printf("isalnum(A) = %d\n", isalnum('A'));
	printf("ft_isalnum(t) = %d\n", ft_isalnum('t'));
	printf("isalnum(t) = %d\n", isalnum('t'));
	printf("ft_isalnum(@) = %d\n", ft_isalnum('@'));
	printf("isalnum(@) = %d\n", isalnum('@'));
	printf("\n\n");
	
	
	printf("isascii:\n");
	printf("ft_isascii(a) = %d\n", ft_isascii('a'));
	printf("isascii(a) = %d\n", isascii('a'));
	printf("ft_isascii(0) = %d\n", ft_isascii('0'));
	printf("isascii(0) = %d\n", isascii('0'));
	printf("ft_isascii(@) = %d\n", ft_isascii('@'));
	printf("isascii(@) = %d\n", isascii('@'));
	printf("ft_isascii('Newline') = %d\n", ft_isascii('\n'));
	printf("isascii('Newline') = %d\n", isascii('\n'));
	printf("\n\n");
	
	
	printf("isprint:\n");
	printf("ft_isprint(a) = %d\n", ft_isprint('a'));
	printf("isprint(a) = %d\n", isprint('a'));
	printf("ft_isprint(0) = %d\n", ft_isprint('0'));
	printf("isprint(0) = %d\n", isprint('0'));
	printf("ft_isprint(@) = %d\n", ft_isprint('@'));
	printf("isprint(@) = %d\n", isprint('@'));
	printf("ft_isprint('Newline') = %d\n", ft_isprint('\n'));
	printf("isprint('Newline') = %d\n", isprint('\n'));
	printf("\n\n");
	

	printf("strlen:\n");
	printf("ft_strlen (Ola Mundo) = %zu\n", ft_strlen(str));
	printf("strlen (Ola Mundo) = %zu\n", strlen(str));
	printf("\n\n");


	printf("memset:\n");
	printf("ft_memset(Ola Mundo) = %p\n", ft_memset(str, '#', 5));
	printf("memset(Ola Mundo) = %p\n", memset(str, '#', 5));
	printf("\n\n");
	
	
	printf("bzero:\n");
	ft_bzero(str, 6);
	printf("After ft_bzero (6)(Ola Mundo)= ");
	while (i++ < 6)
		printf("%c", str[i]);
	printf("\n");
	i = -1;
	bzero(str1, 6);
	printf("After bzero (6)(Ola Mundo)= ");
	while (i++ < 6)
		printf("%c", str1[i]);
	printf("\n\n\n");


	printf("memcpy:\n");
	printf("ft_memcpy (6)(Ola Mundo) = %p\n", ft_memcpy(dest, src, 6));
	printf("memcpy (6)(Ola Mundo) = %p\n", memcpy(dest, src, 6));
	printf("\n\n");


	printf("memmove:\n");
	printf("ft_memmove (6)(Ola Mundo) = %p\n", ft_memmove(dest, src, 6));
	printf("memmove (6)(Ola Mundo) = %p\n", memmove(dest, src, 6));
	printf("\n\n");
	
	
	printf("strlcpy:\n");
	printf("ft_strlcpy (Ola Mundo)(Pao com Manteiga)(7) = %zu\n",
		ft_strlcpy(dst, src1, 7));
	printf("strlcpy (Ola Mundo)(Pao com Manteiga)(7) = %zu\n", strlcpy(dst1,
			src2, 7));
	printf("\n\n");
	
	
	printf("strlcat:\n");
	printf("ft_strlcat (Ola Mundo)(Pao com Manteiga)(7) = %zu\n",
		ft_strlcat(dst, src1, 7));
	printf("strlcat (Ola Mundo)(Pao com Manteiga)(7) = %zu\n", strlcat(dst1,
			src2, 7));
	printf("\n\n");


	printf("toupper:\n");
	printf("ft_toupper(c) = %c\n", ft_toupper('c'));
	printf("toupper(c) = %c\n", toupper('c'));
	printf("\n\n");


	printf("tolower:\n");
	printf("ft_tolower(C) = %c\n", ft_tolower('C'));
	printf("tolower(C) = %c\n", tolower('C'));
	printf("\n\n");

	
	printf("strchr:\n");
	printf("ft_strchr(Olau Mundo) = %s\n", ft_strchr(str2, 'u'));
	printf("strchr(Olau Mundo) = %s\n", strchr(str2, 'u'));
	printf("\n\n");


	printf("strrchr:\n");
	printf("ft_strrchr(Olau Mundo) = %s\n", ft_strrchr(str2, 'u'));
	printf("strrchr(Olau Mundo) = %s\n", strrchr(str2, 'u'));
	printf("\n\n");

	
	printf("strncmp:\n");
	printf("ft_strncmp(123456 && 123456 (6)) = %d\n", ft_strncmp(s1, s2, 6));
	printf("strncmp(123456 && 123456 (6)) = %d\n", strncmp(s1, s2, 6));
	printf("ft_strncmp(123456 && 654321 (6)) = %d\n", ft_strncmp(s3, s4, 6));
	printf("strncmp(123456 && 654321 (6)) = %d\n", strncmp(s3, s4, 6));
	printf("ft_strncmp(654321 && 123456 (6)) = %d\n", ft_strncmp(s5, s6, 6));
	printf("strncmp(654321 && 123456 (6)) = %d\n", strncmp(s5, s6, 6));
	printf("ft_strncmp(123456 && 123478 (4)) = %d\n", ft_strncmp(s7, s8, 4));
	printf("strncmp(123456 && 123478 (4)) = %d\n", strncmp(s7, s8, 4));
	printf("\n\n");

	
	printf("memchr:\n");
	result_ft = (char *)ft_memchr(str7, 'u', 8);
	if (result_ft)
		printf("ft_memchr: Found '%c' at position: %ld\n", *result_ft, result_ft
			- str7);
	else
		printf("ft_memchr: Character not found within the first 5 characters\n");
	result_std = (char *)memchr(str7, 'u', 8);
	if (result_std)
		printf("memchr: Found '%c' at position: %ld\n", *result_std, result_std
			- str7);
	else
		printf("memchr: Character not found within the first 5 characters\n");
	printf("\n\n");

	
	printf("memcmp:\n");
	printf("ft_memcmp (Ola Mundo)(Ola Mundo) = %d\n", ft_memcmp(s9, s10, 7));
	printf("memcmp (Ola Mundo)(Ola Mundo) = %d\n", memcmp(s9, s10, 7));
	printf("ft_memcmp (Olaa Mundo)(Ola Mundo) = %d\n", ft_memcmp(s11, s12, 7));
	printf("memcmp (Olaa Mundo)(Ola Mundo) = %d\n", memcmp(s11, s12, 7));
	printf("ft_memcmp (Ola Mundo)(Olaa Mundo) = %d\n", ft_memcmp(s13, s14, 7));
	printf("memcmp (Ola Mundo)(Olaa Mundo) = %d\n", memcmp(s13, s14, 7));
	printf("\n\n");


	// printf("strnstr:\n");
	// printf("ft_strnstr (Ola Mundo)(a Mundo) = %s\n", ft_strnstr(big, little,
	// 		7));
	// printf("strnstr (Ola Mundo)(a Mundo) = %s\n", strnstr(big, little, 7));
	// printf("\n\n");

	
	printf("atoi:\n");
	printf("ft_atoi (      -123456789) = %d\n", ft_atoi(str3));
	printf("atoi (      -123456789) = %d\n", atoi(str3));
	printf("ft_atoi (123456789) = %d\n", ft_atoi("123456789"));
	printf("atoi (123456789) = %d\n", atoi("123456789"));
	printf("ft_atoi (2147483647) = %d\n", ft_atoi("2147483647"));
	printf("atoi (2147483647) = %d\n", atoi("2147483647"));
	printf("ft_atoi (-2147483648) = %d\n", ft_atoi("-2147483648"));
	printf("atoi (-2147483648) = %d\n", atoi("-2147483648"));
	printf("ft_atoi (0) = %d\n", ft_atoi("0"));
	printf("atoi (0) = %d\n", atoi("0"));
	printf("\n\n");

	
	printf("calloc:\n");
	n_elements = 5;
	arr = (int *)ft_calloc(n_elements, sizeof(int));
	if (!arr)
	{
		printf("Memória não pôde ser alocada.\n");
		return (1);
	}
	printf("Valores alocados e inicializados:\n");
	for (size_t i = 0; i < n_elements; i++)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}
	free(arr);
	printf("\n\n");


	printf("strdup:\n");
	printf("ft_strdup (Ola Mundo) = %s\n", ft_strdup(str5));
	printf("strdup (Ola Mundo) = %s\n", strdup(str5));
	printf("\n\n");

	
	printf("substr:\n");
	printf("ft_substr(Ola Mundo)(4 start)(6 len) = %s\n", ft_substr(str5, 4,
			6));
	printf("\n\n");


	printf("strjoin:\n");
	printf("ft_strjoin(Ola Mundo)(Teste123) = %s\n", ft_strjoin(s15, s16));
	printf("\n\n");

	
	printf("strtrim:\n");
	printf("ft_strtrim(Ola Mundo Teste)(Ola Teste) = %s\n", ft_strtrim(str6,
			set));
	printf("\n\n");


	printf("split:\n");
	printf("\n\n");

	
	printf("itoa:\n");
	printf("ft_itoa(912367) = %s\n", ft_itoa(n1));
	printf("ft_itoa(-912367) = %s\n", ft_itoa(n2));
	printf("\n\n");

	
	printf("strmapi:\n");
	modified = ft_strmapi(original, st_toupper);
	if (modified)
	{
		printf("Original = %s\n", original);
		printf("Modified = %s\n", modified);
	}
	else
		printf("Erro\n");
	printf("\n\n");


	printf("striteri:\n");
	printf("original: %s\n", str8);
	ft_striteri(str8, st_toupper1);
	printf("modificada: %s\n", str8);
	printf("\n\n");

	
	printf("putchar_fd:\n");
	ft_putchar_fd('T', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('s', 1);
	ft_putchar_fd('t', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('E', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('\n', 2);
	printf("\n\n");

	
	printf("putstr_fd:\n");
	ft_putstr_fd("Teste 123\n", 1);
	ft_putstr_fd("Erro\n", 2);
	printf("\n\n");


	printf("putendl_fd:\n");
	ft_putendl_fd("Teste 123", 1);
	ft_putendl_fd("Erro", 2);
	printf("\n\n");

	
	printf("putnbr_fd:\n");
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-98765, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
}
