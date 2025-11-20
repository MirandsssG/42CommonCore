#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 30

int	ft_strlen(char *s)
{
	int i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, int n)
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

int main(int ac, char **av)
{
	char 	*pattern = av[1];
	int		pattern_len = ft_strlen(pattern);
	char	buffer[BUFFER_SIZE];
	char	window[BUFFER_SIZE];
	int		window_len = 0;
	int		bytes;
	int		i;
	int		j;
}