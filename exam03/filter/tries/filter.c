#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 3

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

int		main(int ac, char **av)
{
	char	*pattern = av[1];
	int		pat_len = ft_strlen(pattern);
	char	buffer[BUFFER_SIZE];
	char	window[BUFFER_SIZE];
	int		win_len = 0;
	int		bytes;
	int		i;
	int		j;

	if (ac != 2)
		return (1);
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