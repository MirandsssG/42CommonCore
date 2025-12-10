#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		paranthesis(char *s)
{
	int		opened = 0;
	int		closed = 0;
	int		i = 0;

	while (s[i])
	{
		if (s[i] == '(')
			opened++;
		else if (s[i] == ')')
		{
			if (opened)
				opened--;
			else
				closed++;
		}
		i++;
	}
	return (opened + closed);
}

int		is_paren(char c)
{
	return (c == '(' || c == ')');
}

void	rip(char *s, int mustfix, int nfix, int pos)
{
	if (nfix == mustfix && paranthesis(s) == 0)
	{
		puts(s);
		return;
	}
	int i = pos;
	while (s[i])
	{
		if (is_paren(s[i]))
		{
			char save = s[i];
			s[i] = ' ';
			rip(s, mustfix, nfix + 1, i + 1);
			s[i] = save;

			while (s[i + 1] == save)
				i++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	int	mustfix = paranthesis(av[1]);
	rip(av[1], mustfix, 0, 0);
	return (0);
}