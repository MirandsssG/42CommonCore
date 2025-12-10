#include <stdio.h>

int	paranthesis(char *s)
{
	int	opened = 0;
	int	closed = 0;
	int	i = 0;

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

int	is_paren(char c)
{
	return (c == '(' || c == ')');
}

void	rip(char *s, int must_fix, int nfix, int pos)
{
	if (nfix == must_fix && paranthesis(s) == 0)
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
			rip(s, must_fix, nfix + 1, i + 1);
			s[i] = save;

			while (s[i + 1] == save)
				i++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	int	must_fix = (paranthesis(av[1]));
	rip(av[1], must_fix, 0, 0);
	return (0);
}