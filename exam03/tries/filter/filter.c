#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1

int		ft_strlen(char *s)
{
	int i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

void	zero_window(char *s, int len)
{
	int i = 0;
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	char	*pattern = av[1];
	int		pat_len = ft_strlen(pattern);
	char	buffer[BUFFER_SIZE];
	char	*window = malloc(pat_len);
	int		win_len = 0;
	int		bytes, i, j;

	if (!window)
		return (1);
	zero_window(window, pat_len);
	while ((bytes = read(0, buffer, BUFFER_SIZE)) > 0)
	{
		i = 0;
		while (i < bytes)
		{
			window[win_len++] = buffer[i];
			if (win_len > pat_len)
			{
				write(1, &window[0], 1);
				j = 0;
				while (j < win_len)
				{
					window[j] = window[j + 1];
					j++;
				}
				win_len--;
			}
			if (win_len == pat_len && ft_strncmp(window, pattern, pat_len) == 0)
			{
				j = 0;
				while (j < pat_len)
				{
					write(1, "*", 1);
					j++;
				}
				win_len = 0;
				zero_window(window, pat_len);
			}
			i++;
		}
	}
	j = 0;
	while (j < win_len)
	{
		write(1, &window[j], 1);
		j++;
	}
	return (0);
}