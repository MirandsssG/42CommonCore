#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	swap(char *s1, char *s2)
{
	char	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort(char *s)
{
	int		i = 0;
	int		j = 0;

	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] > s[j])
				swap(s + j, s + i);
			j++;
		}
		i++;
	}
}

void	permutations(char *s, int pos)
{
	int	i = pos;

	if(!s[pos])
		puts(s);
	while (i < s[i])
	{
		ft_sort(s + pos);
		swap(s + i, s + pos);
		permutations(s, pos + 1);
		swap(s + i, s + pos);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	permutations(av[1], 0);
	return (0);
}